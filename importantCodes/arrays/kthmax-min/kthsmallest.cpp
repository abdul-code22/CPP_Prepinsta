//time compelexity O(NlogN)
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int arr[] = {23, 34, 78, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    sort (arr,arr+size);
    cout << arr[k-1];
}