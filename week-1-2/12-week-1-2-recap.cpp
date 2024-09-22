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
#include <string>

struct Structure {
  // VARIABLES (Each has an unsigned version which doubles the positive range by removing the negative range)
  int myInteger = 5;
  float myFloat = 3.14; 
  double myDouble = 3.14; // Always use double unless there is a need to optimize memory
  char myCharacter = 'A';
  char myArray[5] = {'H', 'e', 'l', 'l', 'o'};
  int myMultiArray[5][5] = {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
      {11, 12, 13, 14, 15},
      {16, 17, 18, 19, 20},
      {21, 22, 23, 24, 25}
    };
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

class Class {
  int myInteger = 5;
  public:
    void getInteger() {
      std::cout << myInteger << std::endl;
    }

    int setInteger(int number) {
      myInteger = number;
      return myInteger;
    }
};

class ChildClass : public Class {
  int myChildInteger = 10;
  public:
    void getChildInteger() {
      std::cout << myChildInteger << std::endl;
    }

    int setChildInteger(int number) {
      myChildInteger = number;
      return myChildInteger;
    }
};

int main() {
  Structure myVariables;
  bool isBoolean = true;

  if (isBoolean == myVariables.myBoolean) {
    std::cout << "This is true." << std::endl;
  } else {
    std::cout << "This is false." << std::endl;
  }

  for (int i; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      std::cout << myVariables.myMultiArray[i][j] << " ";
    }
    std::cout << std::endl;
  }

  while (isBoolean) {
    myFunction();
    isBoolean = false;
  }

  do {
    myFunction();
  } while (isBoolean);

  ChildClass myChildClass;

  myChildClass.getInteger();
  myChildClass.getChildInteger();
  
  return 0;
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