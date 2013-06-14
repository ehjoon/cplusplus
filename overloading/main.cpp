#include <iostream>

class complex
{
  protected:
    double real_part;
    double imaginary_part;

  public:
    complex(void)
    {
      real_part = 0;
      imaginary_part = 0;
    }

    complex(double real, double imaginary)
    {
      real_part = real;
      imaginary_part = imaginary;

      std::cout << "New number " << real_part << " " << imaginary_part << " is created\n";
    }

    complex(const complex &other_complex)
    {
      real_part = other_complex.real_part;
      imaginary_part = other_complex.imaginary_part;

      std::cout << "Number " << real_part << " " << imaginary_part << " is assigned\n";
    }

    ~complex() 
    {
      std::cout << "Number " << real_part << " " << imaginary_part << " is destroyed\n";
    }

    double real(void) const
    {
      return real_part;
    }

    double imaginary(void) const
    {
      return imaginary_part;
    }

    void set_real(double real)
    {
      real_part = real;
    }

    void set_imaginary(double imaginary)
    {
      imaginary_part = imaginary;
    }

    complex operator + (const complex &other)
    {
      return (complex(real_part+other.real(), imaginary_part+other.imaginary()));
    }

    complex add(const complex &a, const complex &b)
    {
      return (complex(a.real()+b.real(), a.imaginary()+b.imaginary()));
    }

    complex pooradd(const complex a, const complex b)
    {
      complex c(a.real()+b.real(), a.imaginary()+b.imaginary());
      return c;
    }

    complex &operator += (complex &other)
    {
      this->real_part += other.real();
      this->imaginary_part += other.imaginary();

      return (*this);
    }
};

complex operator + (const complex &a, double real) 
{
  return complex(a.real()+real, a.imaginary());
}

int main(void)
{
  complex a(1, 5);
  complex b(1, 5);

  complex c = a + b;
  std::cout << "New complex is " << c.real() << " " << c.imaginary() << "\n";

  complex d = a.add(a, b);
  std::cout << "Addtional complex is " << d.real() << " " << d.imaginary() << "\n";

  complex e = a.pooradd(a,  b);
  std::cout << "Addtional complex is " << e.real() << " " << e.imaginary() << "\n";

  complex f = a + double(1);
  std::cout << "Other complex is " << f.real() << " " << f.imaginary() << "\n";

  return 0;
}
