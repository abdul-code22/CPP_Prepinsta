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
    cout<< "Smallest element in the array is: " << smallest(array, n)<< endl;
    cout<< "Greatest element in the array is: " << greatest(array, n);
}