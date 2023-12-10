// C++ program to demonstrate the use of virtual function
#include<bits/stdc++.h>
using namespace std;

class Animal {
   private:
    string type;

   public:
    Animal() : type("Animal") {}     // constructor to initialize type

    virtual string getType()      // declare virtual function
    {
        return type;
    }
};

class Dog : public Animal {
   private:
    string type;

   public:
    Dog() : type("Dog") {}   // constructor to initialize type

    string getType() override
    {
        return type;
    }
};

class Cat : public Animal {
   private:
    string type;

   public:
    Cat() : type("Cat") {}  // constructor to initialize type

    string getType() override
    {
        return type;
    }
};

void print(Animal* ani)
{
    cout << "Animal: " << ani->getType() << endl;
}

int main()
{
    Animal* animal1 = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);

    return 0;
}
