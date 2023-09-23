#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    
}

int main()
{
    int array[6] = {110, 17, 42, 13, 41, 50};
    int size = sizeof(array)/sizeof(array[0]);
    int key = 50;
    cout << LinearSearch(array, size, key);
}