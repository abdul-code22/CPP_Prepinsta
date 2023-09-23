#include <iostream>
using namespace std;

bool isEven(int x) { 
    return(!(x & 1));
    }

int main ()
{
    int num;
    cin>>num;
    if (isEven(num))
    {
        cout << "even" << endl;
    }
    else
    cout << "odd" << endl;
    
}