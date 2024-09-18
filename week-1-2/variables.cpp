#include <iostream> //Include the Standard Input/Output library

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* GLOBAL VARIABLES */
string fName;
int age;

/* MAIN FUNCTION (The function that gets executed) */
int main() {
  cout << "What is your first name?" << endl;
  cin >> fName; //Apparently the cin automatically adds a line break after itself
  cout << "\nWhat is your age?" << endl;
  cin >> age;

  cout << "\nHello " << fName << ", you are " << age << " years old!" << endl;

  return 0;
}