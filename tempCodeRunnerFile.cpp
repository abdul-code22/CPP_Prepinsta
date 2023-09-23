#include<bits/stdc++.h>
using namespace std;

int secSmall(int arr[], int n)
{   
    int first = INT_MAX, second = INT_MAX;
    for(int i=0; i<n; i++)
   {
       if(arr[i] < first)
        {                  
            second = first; 
            first = arr[i]; 
        } 
        else if(second>arr[i])
            second = arr[i];
    }
    return second;
}

int main(){

    int arr[] = {318, 28, 57, 71, 96, 102};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << secSmall(arr, n) << endl;
}