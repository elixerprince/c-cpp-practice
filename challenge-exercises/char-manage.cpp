#include <iostream>
#include <string>
#include <vector>

enum CharacterType {
  Knight,
  Wizard,
  Archer
};

struct Character {
  CharacterType type;
  std::string name;
  int healthPoints[5];
  std::vector <std::string> abilities;
};

void printCharacter(const Character& character) {
  switch (character.type) {
    case Knight:
      std::cout << "Character Type: Knight" << std::endl;
      break;
    case Wizard:
      std::cout << "Character Type: Wizard" << std::endl;
      break;
    case Archer:
      std::cout << "Character Type: Archer" << std::endl;
  }
  std::cout << "Character Name: " << character.name << std::endl;
  std::cout << "Character HP: ";
  for (int hp : character.healthPoints) {
    std::cout << hp << " ";
  }
  std::cout << "\nCharacter Abilities: ";
  for (const std::string& ability : character.abilities) {
    std::cout << ability << " ";
  }
}

int main() {
  Character player1;

  player1.type = Knight;
  player1.name = "Sir Lancelot";
  player1.healthPoints[0] = 100;
  player1.healthPoints[1] = 95;
  player1.healthPoints[2] = 80;
  player1.healthPoints[3] = 95;
  player1.healthPoints[4] = 72;
  player1.abilities = {"Slash", "Block", "Charge"};

  printCharacter(player1);

  return 0;
}