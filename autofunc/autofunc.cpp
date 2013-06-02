#include <iostream>

#include "autofunc.h"

Autofunc::Autofunc(int id)
{
  private_var = id;
  std::cout << ">> The object (" << private_var  << ") was created\n";
}

Autofunc::Autofunc(const Autofunc &old)
{
  std::cout << ">> Uninitialized value (" << private_var << ") will be set as (" << old.private_var << ")\n";
  private_var = old.private_var;
}

Autofunc::~Autofunc()
{
  std::cout << ">> The object (" << private_var << ") will be destroyed\n";
}

void Autofunc::operator = (const Autofunc &old)
{
  std::cout << ">> The object (" << private_var << ") is assigned (" << old.private_var << ") + 10\n";
  private_var = old.private_var+10;
  return;
}
