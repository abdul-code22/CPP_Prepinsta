#include <iostream>
using namespace std;

void LinearSearch(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
        {
            cout << i;
            break;
        }
    }
    
}

int main ()
{   int n;
    cin>>n;
    int array[n];

    for (int  i = 0; i < n; i++) {
    {
        cin>>array[i];
    }  
    }
    cout << "KEY: ";
    int key;
    cin>>key;
    LinearSearch(array, n, key);
    return 0;
}