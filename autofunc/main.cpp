#include <iostream>

#include "autofunc.h"

void main2(const Autofunc autof)
{
  std::cout << "Declaring objects 2, 3 and 4\n";

  Autofunc autof2(2);
  Autofunc autof3(3);
  Autofunc autof4(4);

  std::cout << "Declaring object 5 with copied argument\n";
  Autofunc autof5(autof);

  std::cout << "Assign copied argument to object 2\n";
  autof2 = autof;
  std::cout << "Assign object 4 to object 3\n";
  autof3 = autof4;
  std::cout << "Assign object 5 to object 4\n";
  autof4 = autof5;

  std::cout << "main2 return\n";

  return;
}

int main()
{
  std::cout << "Creating object 0\n";
  Autofunc autof(0);

  std::cout << "Calling main2 function with object 0\n";
  main2(autof);

  std::cout << "Function main will be return\n";
};
