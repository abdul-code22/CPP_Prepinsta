//time complexity O(N) time
#include <iostream>
#include <stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    int count = 0;
    int arr[] = {1, 2, 5, 4, 5, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <size; i++){
        if (s.find(arr[i]) == s.end()){
            s.insert(arr[i]);
            count++;
        }
    }
    cout << count << endl;
}