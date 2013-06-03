#include <iostream>

class myarr {
  private:
    int data_max;
    int data[10];
    int data_len;

  public:
    myarr(void) { data_max = 10; data_len = 0; };
    friend bool equal(const myarr one, const myarr other);
};

bool equal(const myarr one, const myarr other)
{
  int idx;
  if ( one.data_len != other.data_len ) return false;
  for ( idx = 0; idx < one.data_len; idx++ ) {
    if ( one.data[idx] != other.data[idx] ) return false;
  }
  return true;
};

int main(void)
{
  std::cout << "Make two objects with same data\n";
  myarr obj_one, obj_two;

  std::cout << "Friend function(or class) can access private data of friend\n";
  if ( equal(obj_one, obj_two) == true ) {
    std::cout << "Two objects are equal\n";
  } else {
    std::cout << "Two objects are NOT equal\n";
  }

  return 0;
}
