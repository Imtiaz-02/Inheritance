#include<iostream>
using namespace std;

class A{

public: // private for private   //
    void abc()
    {
        cout << "helolo" << endl;
    }
};

class B{    //protectedly abc();

public:
    void xyz()
    {
        cout << "My name is " << endl;
    }
};

class C : public  A,B{

public:
    void mn()
    {
        cout << "My name is "  << endl;
    }
};

int main()
{
   return 0;
}
