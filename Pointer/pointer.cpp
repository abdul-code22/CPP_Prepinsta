#include <iostream>
using namespace std;

//pass by value
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "Pass by value a = "<< x << ", b =" << y<<endl;
}

//pass by pointer
void swap1(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "Pass by pointer a = "<< *x << ", b =" << *y<<endl;
}


int main ()
{
    // int x = 10;
    // int* ptr ;
    // ptr = &x;
    // printf("x = %d\n", x);
    // printf("x = %d\n", &x);
    // printf("x = %d\n", ptr);
    // printf("x = %d\n", *&x);
    // printf("x = %d\n", *ptr);
    // printf("x = %d\n", &ptr);

    int a, b;
    a = 10;
    b = 20;


    swap(a, b); //pass by value
    swap1(&a, &b); //pass by pointer

}