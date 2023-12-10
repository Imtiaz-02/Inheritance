#include<iostream>
using namespace std;

class classOne{
public:
    int i=10,j=90;

    void abc()
    {
        cout << "I am from abc ..." << endl;
    }
protected:
     void dm()
    {
        cout << "Dm......." << endl;
    }
private :
    void we()
    {
        cout << "we callling ....." << endl;
    }
};

class classTwo : protected classOne{
    public:
    int i=10,j=90;

   void  play()
   {
       cout << "Playing...."<< endl;
   }
    void reply()
    {
        we();
        cout << "Replying ..." << endl;
    }
};

int main()
{
    classTwo obj;

    obj.reply();

    return 0;
}

