#include <iostream>
#include <vector>

int main() {
  int myArray1[] = {1, 2, 3, 4, 5};
  std::string myArray2[5] = {"one", "two", "three", "four", "five"};
  std::vector<int> myVector; //? Resizable array

  std::cout << myArray1[1] << std::endl;
  std::cout <<  myArray2[3];

  return 0;
} 