//Bug fix from year 3 sem 1 week 2
#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

const int arraySize = 5;

int main() {
  int Grades[arraySize] = {89, 84, 91, 75, 32};
  cout << "Index" << setw(10) << "Element" << "\n";
  for(int i = 0; i < 5; i++)
    cout << setw(4) << i << setw(10) << Grades[i] << "\n";

  return 0;
}
