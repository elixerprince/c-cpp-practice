#include <iostream>
#include <string>

int main() {
  int userNum;
  std::string name;

  const int firstNum = 1, secondNum = 5;

  std::cout << "Enter a number from 1 to 5: ";
  std::cin >> userNum;
  if(userNum < firstNum || userNum > secondNum)
    std::cout << "\n" << userNum << " is not a number between " << firstNum << " and " << secondNum << ".";
  else
    std::cout << "\n" << userNum << " is a valid number!";
  return 0;
}