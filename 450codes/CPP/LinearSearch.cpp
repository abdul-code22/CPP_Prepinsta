#include <iostream>
using namespace std;
int linearSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {23, 34, 78, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout << linearSearch(arr, size, key);
}