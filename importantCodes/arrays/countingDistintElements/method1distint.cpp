//time complexity O(n^2)
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 4, 5, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    cout << size - count << endl;
}