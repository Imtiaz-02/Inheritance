// C++ program to demonstrate static
// variables inside a class

#include <iostream>
using namespace std;

class MyClass {
public:
     static int i;

	MyClass(){
		// Do nothing
	}
	void abc(){

	};
};

int main()
{
	MyClass obj1;   //not possible error ans- static3.cpp
	MyClass obj2;   //not possible  error
	obj1.i = 2;
	obj2.i = 3;
	cout << obj1.i << " " << obj2.i;

	return 0;
}

