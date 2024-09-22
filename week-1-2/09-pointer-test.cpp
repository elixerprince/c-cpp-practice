#include <iostream>

void printInt(int &myInt);
void increment(int &myInt);

int main() {
  int myInt = 1;

  increment(myInt);
  printInt(myInt);

  return 0;
}

void printInt(int &myInt) {
  std::cout << "This is my integer: " << myInt << '\n';
}

void increment(int &myInt) {
  myInt++;
}