#include <bits/stdc++.h>
using namespace std;

void DispArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    
}

int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];
 
    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
 
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
 
            // Increment index of smaller element
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
 
        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1); //left partition
        quickSort(arr, pi + 1, high);// right partition
    }
}


int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);
    DispArray(arr, N); // before sorting 
    cout << endl;
	quickSort(arr, 0, N - 1);
	DispArray(arr, N);// after sorting

	return 0;
}