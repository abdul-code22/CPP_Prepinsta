#include <iostream>
using namespace std;

int BinarySearch(int *arr, int size, int key){

}

int main()
{
    int arr[] = {23, 34, 78, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout << BinarySearch(arr, size, key);
}