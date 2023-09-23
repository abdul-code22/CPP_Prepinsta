#include <bits/stdc++.h>
using namespace std;
//the optimize approach is with usign stacks instead of of using two loops 

void stockSpan(int arr[], int size) {

    stack<int> s;
    s.push(0);
    cout << 1 << " ";

    for (int i = 1; i < size; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        int span = s.empty() ? i + 1 : i - s.top();
        cout << span << " ";
        s.push(i);
    }
}

int main()
{
    int arr[] = {12, 14, 15, 7, 15, 17, 5, 12, 10, 13,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    stockSpan(arr, size);
    return 0;
}