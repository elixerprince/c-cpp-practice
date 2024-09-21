#include <iostream>
#include <string>

class Fruit {
  public:
    std::string name;
    Fruit(std::string name = "unknown") {
      this->name = name;
      std::cout << "A fruit was created." << std::endl;
    }
};

class Apple : public Fruit {
  public:
    Apple() : Fruit("apple") {
      std::cout << "An apple was created." << std::endl;
    }
};

int main() {
  Fruit fruit1("apple");
  std::cout << "The name of the fruit is " << fruit1.name << "." << std::endl;
  
  return 0;
}