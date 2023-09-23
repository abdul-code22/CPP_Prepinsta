//tertiary method
#include <iostream>
using namespace std;

int main ()
{
    int a;
    cin>>a;
    //(condition)? (if true ) : (if false)
    if(a == 0)
            cout << "Zero"; else (a > 0) ? cout << "Positive": cout << "Negative";
    
    return 0;
}