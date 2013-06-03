#include <iostream>

class howstatic {
  private:
    static int obj_number; /* Declaration here */

  public:
    howstatic(void) {
      obj_number++;
    };
    ~howstatic(void) {
      obj_number--;
    };

    static int get_obj_num(void) {
      return obj_number;
    };
};

int howstatic::obj_number = 0; /* Defining here */

int main(void)
{
  std::cout << "Static method can access only static member\n";

  howstatic obj1, obj2, obj3;

  std::cout << "Number of objects of class howstatic is " << howstatic::get_obj_num() << "\n";

  return 0;
}
