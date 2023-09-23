#include<iostream>
using namespace std;
//default constructor
class A
{
    public:
    A();
    ~A();
};

A::A()
{
    cout << "Constructor called " << endl;
}

A::~A()
{   
    cout << "Destructor called " << endl;
}


int main()
{
    A obj1; //constructor called
    int x = 1;

    if(x){
         A obj2;//constructor called
    }// destructor called
    cout << "checking" << endl;
    return 0;
}
//destructor called