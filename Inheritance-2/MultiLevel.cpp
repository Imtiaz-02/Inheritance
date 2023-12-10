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

class classTwo : protected classOne{ // not accessible for private
public:
    int i=10,j=90;

   void  play()
   {
       cout << "Playing...."<< endl;
   }
};

class classThree : private classTwo{
public:
    int i , p;
    void run()
    {
        cout << "running" << endl;
        play();
        abc();
    }
};

int main()
{
    classThree obj;
    obj.run();
    return 0;
}



