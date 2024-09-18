#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string name; //This is apart of the std namespace
double num1, num2, result;

int main() {
  cout << "What is your full name?" << endl;
  getline(
    cin, name);
  cout << "\nEnter two numbers to be multiplied! " << endl;
  cout << "What is your first number?" << endl;
  cin >> num1;
  cout << "What is your second number?" << endl;
  cin >> num2;

  result = num1 * num2;
  
  cout << "\nHello " << name << "." << endl; 
  cout << "\nThe result of multiplying the numbers you entered is " << result << endl;

  return 0;
} 