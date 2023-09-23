#include <iostream>
using namespace std;

int main ()
{
    int a[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] <<" ";
    }
cout << endl;
cout <<"2D array " << endl;
    int b[3][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
    for (int i = 0; i < 3; i++)
    {   for (int j = 0; j < 3; j++)
        {
          cout << b[i][j] <<" ";
          
        }
       cout << endl;
    }
cout << endl << "Code generation"<< endl;
    int arr[5];

    // Assume that base address of arr is 2000 and size of integer is 32 bit
    arr[0]++;

    printf("%d", arr);

    return 0;
}