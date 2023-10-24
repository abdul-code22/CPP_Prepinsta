#include<iostream>
#include<stack>
using namespace std;

int main ()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(4);
    cout << "Top: " << s.top() << endl;
    cout << "size: " << s.size() << endl;
    s.emplace(12);
    s.pop();
    cout << "Top: " << s.top() << endl;

    if (s.empty())
     {
         cout << "Stack is empty!" << endl;
     }
     else
     {
         cout << "Stack is NOT empty!" << endl;
     }
    
}