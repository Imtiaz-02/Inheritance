 #include <iostream>
using namespace std;

class MyClass {
public:
    static int i;

    MyClass(){
        // Do nothing
    };
};

int MyClass::i = 4;

int main()
{
    MyClass obj;
    obj.i++;
    MyClass obj2;

    cout << obj.i << "  "<< obj2.i;
}
