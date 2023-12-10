#include <iostream>
using namespace std;

class GfG {
	int i;

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
		GfG obj;
		obj.abc();
	}

	cout << "End of main\n";
}
