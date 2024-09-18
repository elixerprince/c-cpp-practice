#include <iostream>

using std::string;
using std::cin; 
using std::cout;
using std::endl;

int userNum;
string name;

const int firstNum = 1, secondNum = 5;

int main() {
  cout << "Enter a number from 1 to 5: ";
  cin >> userNum;
  if(userNum < firstNum || userNum > secondNum)
    cout << "\n" << userNum << " is not a number between " << firstNum << " and " << secondNum << ".";
  else
    cout << "\n" << userNum << " is a valid number!";
  return 0;
}