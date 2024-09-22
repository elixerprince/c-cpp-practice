#include <iostream>
#include <string>
#include <vector>

enum CharacterType {
  KNIGHT,
  WIZARD,
  ARCHER
};

struct Character {
  CharacterType type;
  std::string name;
  int healthPoints[5];
  std::vector<std::string> abilities;
};

void printCharacter(const Character &character) {
  switch (character.type) {
    case KNIGHT:
      std::cout << "Character Type: Knight\n";
      break;
    case WIZARD:
      std::cout << "Character Type: Wizard\n";
      break;
    case ARCHER:
      std::cout << "Character Type: Archer\n";
  }
  std::cout << "Character Name: " << character.name << '\n';
  std::cout << "Character HP: ";
  for (int hp : character.healthPoints) {
    std::cout << hp << " ";
  }
  std::cout << "\nCharacter Abilities: ";
  for (const std::string &ability : character.abilities) {
    std::cout << ability << " ";
  }
}

int main() {
  Character character1;

  character1.type = KNIGHT;
  character1.name = "Sir Lancelot";
  character1.healthPoints[0] = 100;
  character1.healthPoints[1] = 95;
  character1.healthPoints[2] = 80;
  character1.healthPoints[3] = 95;
  character1.healthPoints[4] = 72;
  character1.abilities = {"Slash", "Block", "Charge"};

  printCharacter(character1);

  return 0;
}