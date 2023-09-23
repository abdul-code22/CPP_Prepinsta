//Program for the largest and smallest element of the array

#include <iostream>
using namespace std;

int smallest(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        
    }
    return min;
}
int greatest(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > min)
        {
            min = array[i];
        }
        
    }
    return min;
}

int main ()
{
    int n;
    cin >> n;

    int array[n];
    cout << "array input: " << endl;
    for (int  i = 0; i < n; i++) {
    {
        cin >> array[i];
    }
    }
    int small = smallest(array, n);
    int large = greatest(array, n);
    int secSM = 2147483647;

    for (int i = 1; i < n; i++)
    {
        if (array[i] < secSM && array[i] != small)
        {
            secSM = array[i];
        }
        
    }
    int secLR = -2147483647;
    for (int i = 1; i < n; i++)
    {
        if (array[i] > secLR && array[i] != large)
        {
            secLR = array[i];
        }
        
    }
    cout<< secSM << " is the second smallest"<< endl;
    cout<< secLR << " is the second smallest"<< endl;
}