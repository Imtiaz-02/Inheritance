
// CPP program to illustrate
// class objects as static
#include <iostream>
using namespace std;

class GfG {
	int i = 0;

public:
	GfG()
	{
		i = 0;
		cout << "Inside Constructor\n";
	}

	~GfG() { cout << "Inside Destructor\n"; }
	void abc(){cout << "hlw.." << endl;}
};

int main()
{
	int x = 0;
	if (x == 0) {
		static GfG obj;
		obj.abc();
	}

	cout << "End of main\n";
}
