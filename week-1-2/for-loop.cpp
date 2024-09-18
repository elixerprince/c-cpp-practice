#include <iostream>

using std::cout;
using std::endl;

int main() {
  const int arraySize = 5;
  int Grades[arraySize] = {89, 84, 91, 75, 32};

  cout << "\nGrades using normal for loop: " << endl;

  for (int i = 0; i < arraySize; i++)
    cout << "Grades[" << i << "] = " << Grades[i] << "\n" << endl;

  cout << "\nGrades using range-based for loop: " << endl;

  for (int i : Grades)
    cout << "Grades[" << i << "] = " << i << "\n" << endl;

  return 0;
}