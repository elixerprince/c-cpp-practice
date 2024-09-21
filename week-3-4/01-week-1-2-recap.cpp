/*-----------------------------------------------------------
                      WEEK 1 - 2 RECAP
--------------------------------------------------------------
1. Variables (utilize proper naming conventions and use comments 
    to explain)
2. Data Types (int, float, double, char, bool, string, etc.)
3. Operators (arithmetic, assignment, comparison, logical, etc.)
4. Conditional Statements (if, else if, else, switch)
5. Loops (for, while, do-while)
6. Functions (parameters, return types, function overloading)
7. Arrays (single, multi-dimensional)
8. Strings (string class, string functions)
9. Pointers (address-of, dereference, pointer arithmetic)
10. Structures (struct, struct variables, struct pointers)
11. Classes (class, class variables, class functions, class 
    constructors, class inheritance)
------------------------------------------------------------------*/
#include <iostream>

// Forward declarations
struct Structure;
void myFunction();
int increment(int number);
double increment(double number);

int main() {
  Structure myVariables;
  
  return 0;
}

struct Structure {
  // VARIABLES (Each has an unsigned version which doubles the positive range by removing the negative range)
  int myInteger = 5;
  float myFloat = 3.14; 
  double myDouble = 3.14; // Always use double unless there is a need to optimize memory
  char myCharacter = 'A';
  bool myBoolean = true;
  std::string myString = "Hello, World!"; // Never bring the entire std namespace into the global namespace
};

void myFunction() {
  std::cout << "This is a function." << std::endl;
}

int increment(int number) {
  return number++;
}

double increment(double number) {
  return number++;
}

/*--------------------------------------------
          NAMING CONVENTIONS
----------------------------------------------
1. Use camelCase for variable names and 
function names
2. Use PascalCase for class names
3. Use UPPERCASE for constants
4. Use descriptive names
---------------------------------------------*/