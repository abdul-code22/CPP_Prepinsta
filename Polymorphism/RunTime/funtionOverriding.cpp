// only possivle by inherittance
#include <iostream>
using namespace std;
//virtual void speak() = 0; // for pure virtual functions
class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{   public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Dog dog1;
    dog1.speak();
}