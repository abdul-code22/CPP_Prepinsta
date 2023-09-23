#include<iostream>
using namespace std;

//uniary overloading of a operator also we need to create a special funtion for the role of operator
class unaryOverloading{
    int x = 0, y = 0, z = 0;
    public:
    void print(){
        cout << x << " " << y << " " << z << endl;
    }
    //no c++ library exist so we define the function
    //we can also customize this function
    void operator ++(){
        x++; y++; z++;
    }
};

int main()
{
    unaryOverloading o1;
    cout << "Before overloading" << endl;
    o1.print();
    ++o1;
    cout << "After overloading" << endl;
    o1.print();
}