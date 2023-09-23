#include <iostream>
#include <cmath>
using namespace std;

void primeFactor(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n%i==0)
        {
            cout << i << " ";
            n /= i;
        }
        
    }
    // if (n > 2)
    // {
    //     cout << n << " ";
    // }
    
}
int main ()
{
    int n;
    cin >> n;
    primeFactor(n);
}