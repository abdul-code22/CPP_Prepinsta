#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int check = n;
    int reverse = 0, remainder = 0;

    while (check!=0)
    {
        remainder = check % 10;
        reverse = reverse*10 + remainder;
        check /= 10;
    }
    cout << reverse << endl;
    // cout << n << endl;

    if (reverse==n)
    {
        cout<<"Palindrome";
    }
    else
    cout << "NOT palindrome";
}