#include <iostream>

int myInt = 1;

void printInt() {
  std::cout << "This is my integer: " << myInt << std::endl;
}

void increment(int myInt) {
  myInt++;
}

int main() {
  increment(myInt);
  printInt();

  return 0;
}