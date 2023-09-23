// Write a C++ program to compute Module values that can work for both int and float.

#include <iostream>
using namespace std;

// function with float type parameter
float module(float var)
{
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter

int module(int var)
{
    if (var < 0)
        var = -var;
    return var;
}

int main()
{

    // call function with int type parameter
    cout << "module value of -6 = " << module(-6) << endl;

    // call function with float type parameter
    cout << "module value of 6.6 = " << module(6.6f) << endl;
    return 0;
}