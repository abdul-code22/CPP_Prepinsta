//first sort the array and return the output
//O(NlogN)
//auxiliary space O(1)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {23, 34, 78, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    cout << "Max element in the array" << " ";
    cout << arr[size-1]<<endl;
    cout << "Min element in the array" << " ";
    cout << arr[0]<<endl;
    cout << endl;
}