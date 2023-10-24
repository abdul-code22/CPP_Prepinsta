#include <iostream>
using namespace std;
// Time Complexity is : O(n^2)
// Space Complexity is : O(1)
void span(int array[], int size){
    for (int i = 0; i < size; i++)
    {   
        int spanCount = 1;
        for (int  j = i - 1; j >= 0 && (array[j] <= array[i]); j--)
        {
            spanCount++;
        }
            cout << spanCount <<" ";
        
    }
    
}

int main()
{
    int arr[] = {12, 14, 15, 7, 15, 17, 5, 12, 10, 13,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    span(arr, size);
}