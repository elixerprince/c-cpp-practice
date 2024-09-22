#include <iostream>

void printHello2();
void printString(std::string str);

void printHello1() {
  std::cout << "Hello, World!\n";
}

int main() {
  printHello1();
  printHello2();

  printString("Hello, World!");

  return 0;
}

void printHello2() {
  std::cout << "\nHello, World!\n";
}

void printString(std::string str) {
  std::cout << str << '\n';
}