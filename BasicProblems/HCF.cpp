#include <iostream>
using namespace std;

int main ()
{
    int m,n;
    cin>>m>>n;
    int min;
    if (m>n)
        min = n;
    else
        min = m;
    int HCF = 1;
    for (int i = 1; i <= min; i++)
    {
        if (m%i==0 && n%i==0)
        {
           HCF = i;
        }   
    }
    cout << HCF << endl;
    // cout << "LCM is " << (m*n)/HCF << endl;
}