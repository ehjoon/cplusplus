#ifndef __AUTO_FUNC__
#define __AUTO_FUNC__

class Autofunc {
  private:
    int private_var;

  public:
    Autofunc(int);
    Autofunc(const Autofunc &);
    ~Autofunc(void);
    void operator = (const Autofunc &old);
};

#endif
