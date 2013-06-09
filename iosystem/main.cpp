#include <iostream>
#include <iomanip>

int main(void)
{
  int number = 12;
  float real = 12.34;

  std::cout << number << "\n";
  std::cout << std::setw(5) << number << "<-\n";
  std::cout << std::setw(5) << std::setfill('*') << number << "<-\n";
  std::cout << "setw and sefill is effective only once\n";
  std::cout << number << "\n";
  std::cout << "ios_base is typedef of basic_ios whic is inherited from ios\n";
  std::cout << std::setiosflags(std::ios_base::showpos|std::ios::left) << std::setw(5) << number << "<-\n";

  std::cout << std::setiosflags(std::ios::scientific) << real << "<-\n";
}
