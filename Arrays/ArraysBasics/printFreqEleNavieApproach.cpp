#include <iostream>
using namespace std;

void DispArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    
}

int countFrequentcy(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        int count = 0;

            for (int j = 0; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    flag = true;
                    break;
                }
                
            }
            if (flag == true)
            continue;

            for (int j = 0; j <= i; j++)
            {
                if (arr[j] == arr[i])
                {
                    count++;
                }
            }
            DispArray(arr, count);
    } 
    
}

int main ()
{
    int arr[] = { 23, 45 ,67 ,12 ,45 ,67 ,67, 15, 23};
    int size = sizeof(arr)/sizeof(arr[0]);
    DispArray(arr, size);
    cout << endl;
    countFrequentcy(arr, size);
}