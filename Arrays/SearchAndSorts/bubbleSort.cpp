#include<iostream>
using namespace std;

int bubbleSort(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int i = 0;
    for (int i = 0; i < size; i++) // to keep the record of parsing 
    {   
        bool swaped = false; // will improve the best case performance of the bubble sort algorithm O(N)
        {   
            // to ekeep the record of interactions in the array
            for (int j = 0; j < size - i - 1; j++)  
            // this j < size - i - 1 is to eleminate the sorted part the array i.e the last element(s) of the array
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swaped = true;   
                }   
            } 
            if (swaped == false)
                break;    
        }
    }
}

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

int main ()
{
    int arr[] = {12, 56, 4, 53, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Before sorting: "<< endl;
    print(arr, size);
    cout <<endl;
    bubbleSort(arr, size);
    cout << "After sorting: "<< endl;
    print(arr, size);
}