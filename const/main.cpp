#include <iostream>

class myclass {
  private:
    const int const_value;

  public:
    myclass(): const_value(10) {
      /* nothing */
    };

    int value(void) {
      return const_value;
    };
};

class enumclass {
  private:
    enum { const_value = 100 }; /* Integer is only acceptable */

  public:
    enumclass(void) {
    };

    int value(void) {
      return const_value;
    };
};

int main(void)
{
  std::cout << "How to initialize constant variable in a class\n";
  std::cout << "Class myclass initializes const values using init block\n";
  myclass myobject;
  std::cout << "Class enumclass initializes const values defining enum\n";
  enumclass enumobject;

  std::cout << "Class myclass has const value, " << myobject.value() << "\n";
  std::cout << "Class enumclass has const value, " << enumobject.value() << "\n";
}
