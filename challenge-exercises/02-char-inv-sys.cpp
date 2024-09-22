#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>

enum ItemType {
  ARMOR,
  WEAPON,
  CONSUMABLE
};

struct Item {
  ItemType itemType;
  std::string itemName;
  int itemValue;
};

struct Player {
  std::string name;
  std::vector<Item> items;
  int health, maxHealth = 100, level, experience, attack, defense;
};

void displayPlayerStats(const Player &player) {
  std::cout << "Player Name: " << player.name << '\n';
  std::cout << "Player Health: " << player.health << '\n';
  for (Item item : player.items) {
    std::cout << "Player Item: " << item.itemName << '\n';
  }
  std::cout << "Player Level: " << player.level << '\n';
  std::cout << "Player Experience: " << player.experience << '\n';
  std::cout << "Player Attack: " << player.attack << '\n';
  std::cout << "Player Defense: " << player.defense << '\n';
}

void addItemToPlayerInventory(Player &player, const Item &item) {
  player.items.push_back(item);
}

void removeItemFromPlayerInventory(Player &player, const std::string &itemName) {
  auto item = std::find_if(player.items.begin(), player.items.end(), [&itemName](const Item &i) { return i.itemName == itemName; });
  if (item != player.items.end()) {
    player.items.erase(item);
    std::cout << "Removed item: " << itemName << '\n';
  } else {
    std::cout << "Item not found in inventory: " << itemName << '\n';
  }
}

void useItem(const Item &item, Player &player) {
  switch (item.itemType) {
    case ARMOR:
      std::cout << "Armor item used.\n";
      player.defense += item.itemValue;
      break;
    case WEAPON:
      std::cout << "Weapon item used.\n";
      player.attack += item.itemValue;
      break;
    case CONSUMABLE:
      std::cout << "Consumable item used.\n";
      player.health += item.itemValue;
  }
}

void displayInventory(const Player &player) {
  std::cout << "Inventory Items:\n";
  for (const Item &item : player.items) {
    std::cout << item.itemName << " : " << item.itemType << '\n';
  }
}

void levelUp(Player &player) {
  if (player.experience >= 100) {
    player.level++;
    player.experience = 0;
    player.maxHealth += 20;
    player.attack += 5;
    player.defense += 2;
  }
}

int main() {
  Player player1;
  player1.name = "Hero";
  player1.maxHealth = 100;
  player1.health = player1.maxHealth;
  player1.level = 1;
  player1.experience = 0;
  player1.attack = 10;
  player1.defense = 5;

  Item item1;
  item1.itemName = "Sword";
  item1.itemType = WEAPON;
  item1.itemValue = 10;

  Item item2;
  item2.itemName = "Health Potion";
  item2.itemType = CONSUMABLE;
  item2.itemValue = 20;

  addItemToPlayerInventory(player1, item1);
  addItemToPlayerInventory(player1, item2);

  displayPlayerStats(player1);
  displayInventory(player1);

  return 0;
}