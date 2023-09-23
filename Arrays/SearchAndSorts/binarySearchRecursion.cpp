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
    if (end >= start){
        
    }
    else 
    return -1;
}


int main()
{
    int array[] = {12,82,323,584,5};
    int key;
    cout << "Key: ";
    cin>>key;
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Sorted Array: "; 
    sort(array, array + size) ;
    cout << endl;
    int index = binary_search(array, size, key);
    cout << index << endl;

    return 0;
}
