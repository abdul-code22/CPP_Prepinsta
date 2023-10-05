#include<bits/stdc++.h>
using namespace std;

int min(int *arr, int size){
    if (size == 0) return -1;
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int max(int *arr, int size){
    if (size == 0) return -1;
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {23, 34, 78, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << max(arr, size);
    cout << endl;
    cout << min(arr, size);
    return 0;
}