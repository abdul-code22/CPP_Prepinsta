//Binary search only works for sorted
//time complexity 
//best case is O(1)
//average case and worst case is O(Logn)
//space complexity is O(1)
#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int arr[], int n, int key) // n is the size of the array
{
    int start = 0;
    int end = n - 1;
    //int mid = (start + end)/2;   // can create problem with int range so we need to update formula to 
    int mid = start + (end - start)/2; //updated formula

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }

        else if (key > arr[mid])
        {
          start = mid + 1;   
        }
        else 
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

//second method of binary search using recursion 
/*int binarySearch(int array[], int start, int end, int key)
{
	int mid = end + (start - end)/2;

	if (array[mid] == key)
	{
		return mid;
	}

	else if (array[mid] < key)
	return binarySearch(array, mid+1, end, key);

	else 
	return binarySearch(array, start, mid-1, key);
}*/


int main()
{
    int array[] = {12,82,323,584,5};
    int key;
    cout << "Key: ";
    cin>>key;
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Sorted Array: "; 
    sort(array, array + size) ;

    //diaplay of sorted array
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
    
    cout << endl;
    int index = binary_search(array, size, key);
    cout << index << endl;

    return 0;
}
