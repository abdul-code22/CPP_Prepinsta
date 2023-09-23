#include<iostream>
using namespace std;

void swap2(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    
}

int main ()
{
    int a, b;
    a = 10;
    b = 20;
    swap2(a, b); //pass by reference

    cout << "Pass by Reference a = "<< a << ", b =" << b<<endl;
}