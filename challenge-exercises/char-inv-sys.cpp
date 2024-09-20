#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>

enum ItemType {
  Armor,
  Weapon,
  Consumable
};

struct Item {
  std::string itemName;
  ItemType itemType;
  int itemValue;
};

struct Character {
  std::string name;
  std::vector <Item> items;
  int health, maxHealth = 100, level, experience, attack, defense;
};

void displayCharacterStats(const Character &character) {
  std::cout << "Character Name: " << character.name << std::endl;
  std::cout << "Character Health: " << character.health << std::endl;
  for (Item item : character.items) {
    std::cout << "Character Item: " << item.itemName << std::endl;
  }
  std::cout << "Character Level: " << character.level << std::endl;
  std::cout << "Character Experience: " << character.experience << std::endl;
  std::cout << "Character Attack: " << character.attack << std::endl;
  std::cout << "Character Defense: " << character.defense << std::endl;
}

void addItemToCharacterInventory(Character &character, const Item &item) {
  character.items.push_back(item);
}

void removeItemFromCharacterInventory(Character &character, const std::string &itemName) {
  auto item = std::find_if(character.items.begin(), character.items.end(), [&itemName](const Item &i) { return i.itemName == itemName; });
  if (item != character.items.end()) {
    character.items.erase(item);
    std::cout << "Removed item: " << itemName << std::endl;
  } else {
    std::cout << "Item not found in inventory: " << itemName << std::endl;
  }
}

void useItem(const Item &item, Character &character) {
  switch (item.itemType) {
    case Armor:
      std::cout << "Armor item used." << std::endl;
      character.defense += item.itemValue;
      break;
    case Weapon:
      std::cout << "Weapon item used." << std::endl;
      character.attack += item.itemValue;
      break;
    case Consumable:
      std::cout << "Consumable item used." << std::endl;
      character.health += item.itemValue;
  }
}

void displayInventory(const Character &character) {
  std::cout << "Inventory Items:" << std::endl;
  for (const Item &item : character.items) {
    std::cout << item.itemName << " : " << item.itemType << std::endl;
  }
}

void levelUp(Character &character) {
  if (character.experience >= 100) {
    character.level++;
    character.experience = 0;
    character.maxHealth += 20;
    character.attack += 5;
    character.defense += 2;
  }
}

int main() {
  Character player;
  player.name = "Hero";
  player.maxHealth = 100;
  player.health = player.maxHealth;
  player.level = 1;
  player.experience = 0;
  player.attack = 10;
  player.defense = 5;

  Item item1;
  item1.itemName = "Sword";
  item1.itemType = Weapon;
  item1.itemValue = 10;

  Item item2;
  item2.itemName = "Health Potion";
  item2.itemType = Consumable;
  item2.itemValue = 20;

  addItemToCharacterInventory(player, item1);
  addItemToCharacterInventory(player, item2);

  displayCharacterStats(player);
  displayInventory(player);

  return 0;
}