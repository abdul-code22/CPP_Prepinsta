//reverse the array by iterative method
#include <iostream>
using namespace std;

void ReverseArray(int *array, int size) {
    int start = 0;
    int end = size-1;
    while (start < end) {  
      
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {23, 34, 78, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    ReverseArray(arr, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
    
