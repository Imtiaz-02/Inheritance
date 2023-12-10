#include <iostream>
using namespace std;

class MyClass {
   static  int count;    // static data member
public:

    MyClass(){
        count++;
    }
    // static member function
    static void abc()
    {
        cout << "tesing non static method.." << endl;
    }
    static int getCount() {
        abc();
      return count;
    }

};

int MyClass::count = 0;

int main() {
  MyClass obj1, obj2, obj3;
  cout << MyClass::getCount() << endl;
  return 0;
}
