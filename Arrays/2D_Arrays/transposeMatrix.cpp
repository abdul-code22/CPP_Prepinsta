#include <iostream>
using namespace std;

int main()
{
    int first[3][3], transpose[3][3];
    int n = 3, m = 3;
    cout << "enter elements of array \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> first[i][j];
        }
    }
    cout << "transpose is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = first[j][i];
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}