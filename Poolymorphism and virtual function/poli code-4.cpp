// C++ program to access overridden function using pointer
// of Base type that points to an object of Derived class

#include <iostream>
using namespace std;

class Base {
   public:
    void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Derived derived1;

    Base* ptr;          // pointer of Base type that points to derived1
    ptr = &derived1;

    ptr->print();       // call function of Base class using ptr

    return 0;
}
