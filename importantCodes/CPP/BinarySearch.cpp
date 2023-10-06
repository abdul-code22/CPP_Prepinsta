#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int *arr, int size, int key){
    int start = 0;
    int end = size;
    int mid = (start+end)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            start = mid+1;
             
        }
        else
        {
            end = mid -1;   
        }

        mid = (start + end)/2; 
    }
    return -1;
    
}

int main()
{
    int arr[] = {23, 34, 78, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    sort(arr, arr + size);
    cout << "Sorted array "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout <<"Index of the element entered: " << BinarySearch(arr, size, key);
}