#include<iostream>
using namespace std;

class classOne{
public:
    int i=10,j=90;

    void abc()
    {
        cout << "I am from abc ..." << endl;
    }
};

class classTwo : public classOne{
public:
    int i=10,j=90;

   void  play()
   {
       cout << "Playing...."<< endl;
   }
};

int main()
{
    classTwo obj;

    obj.play();

    return 0;
}



