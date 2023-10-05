//recersive method to reverse the array 
#include <iostream>
using namespace std;

void ReverseArray(int *arr, int start, int end){
    if(start >=end) return;

    swap(arr[start], arr[end]);
    ReverseArray(arr, start+1, end-1);
}

int main()
{
    int arr[] = {23, 34, 78, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = size - size;
    int end = size-1;
    ReverseArray(arr, start, end);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}