#include <iostream>
using namespace std;

int main()
{   int sum = 0;
    int first[3][3];
    int n = 3, m = 3;
    cout << "enter elements of array \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> first[i][j];
        }
    }

    cout << "sum of elements is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += first[j][i];   
        }
    }
    cout<<sum;
}    