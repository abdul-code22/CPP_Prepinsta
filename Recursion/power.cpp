#include<iostream>
using namespace std;

int power(int m, int n){
    if (n >= 1)
    return m *power(m, n-1);
    else 
    return 1;
}

int main()
{
    int m, n;
    cin >> m >> n;  // m raised to the power of n
    cout << power(m,n) << endl;

    
}