#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Character {
  std::string name;
  int health;
  int level;
  std::vector <std::string> items;
};

struct Item {
  std::string itemName;
  std::string itemType;
  int itemValue;
};

void displayCharacterStats(const Character &character) {
  std::cout << "Character Name: " << character.name << std::endl;
  std::cout << "Character Health: " << character.health << std::endl;
  for (std::string item : character.items) {
    std::cout << "Character Item: " << item << std::endl;
  }
}

void addItemToCharacterInventory(Character &character, const Item &item) {
  character.items.push_back(item.itemName);
}

void removeItemFromCharacterInventory(Character &character, const Item &charItem) {
  auto item = std::find(character.items.begin(), character.items.end(), charItem.itemName);
  if (item != character.items.end()) {
    character.items.erase(item);
  } else {
    std::cout << "Item not found in inventory." << std::endl;
  }
}

void useItem(const Item &item) {
  if (item.itemType == "Consumable") {
    std::cout << "Item used: " << item.itemName << std::endl;
  }
}

void displayInventory(const Character &character) {
  std::cout << "Inventory Items:" << std::endl;
  for (const std::string &item : character.items) {
    std::cout << " - " << item << std::endl;
  }
}

int main() {
  Character player;
  player.name = "Hero";
  player.health = 100;
  player.level = 1;

  Item item1;
  item1.itemName = "Sword";
  item1.itemType = "Weapon";
  item1.itemValue = 10;

  Item item2;
  item2.itemName = "Health Potion";
  item2.itemType = "Consumable";
  item2.itemValue = 20;

  addItemToCharacterInventory(player, item1);
  addItemToCharacterInventory(player, item2);

  displayCharacterStats(player);
  displayInventory(player);

  return 0;
}