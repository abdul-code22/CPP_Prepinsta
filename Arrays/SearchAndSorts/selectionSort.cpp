#include<iostream>
using namespace std;

void DispArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    
}
int selectionSort(int arr[], int N)
{
   int i, j;
   for ( i = 0; i < N ; i++ )
   {    
    int min_index = i;
    for ( j = i +1 ; j < N; j++)
    {
        if (arr[j] < arr[min_index])
            min_index = j;
    }
    swap(arr[min_index], arr[i]);
   }
        
      
}

int main ()
{
    int arr[] = { 12, 11, 13, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);
    // before sorting 
    DispArray(arr, N); 
    cout << endl;
	selectionSort(arr, N);
    // after sorting
	DispArray(arr, N);

    return 0;
}