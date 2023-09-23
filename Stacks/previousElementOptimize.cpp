#include <iostream>
#include <stack>
using namespace std;

void prevGreater(int arr[], int size) {
    stack<int>s;

    s.push(arr[0]);
    cout << "- ";

    for (int i = 1; i < size; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
            s.pop();
        if (s.empty())
            cout << "- ";
        else
            cout << s.top() << " ";
        s.push(arr[i]);
    }
}

int main ()
{
    int arr[] = {19, 27, 36, 54, 45, 36, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    prevGreater(arr, size);
}