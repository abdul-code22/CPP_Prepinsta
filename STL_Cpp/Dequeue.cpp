#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(12);
    d.push_back(14);
    //input 
    for (auto it = d.begin(); it != d.end(); ++it){
        cout << *it <<" ";
    }

    d.pop_front();
    cout << endl;
    cout << "After popping from front" << endl;
    for (auto it = d.begin(); it != d.end(); ++it){
        cout << *it <<" ";
    }
    d.pop_back();
    cout << endl;
    cout << "After popping from back" << endl;
    for (auto it = d.begin(); it != d.end(); ++it){
        cout << *it <<" ";
    }
}