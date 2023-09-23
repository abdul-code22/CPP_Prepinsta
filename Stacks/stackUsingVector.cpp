//stack using vectors with structure
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Stack
{   
    // public:
    vector<int> vect;

    void push(int val){
        vect.push_back(val);
    }

    int pop(){
        if (isEmpty()) 
        {
            cout << "Empty";
            return INT_MIN;
        }
        int temp = vect.back();
        vect.pop_back();
        return temp;
    }

    int peek(){
        if(isEmpty()) {
            cout << "Empty"<< endl;
            return INT_MIN;
        }
        else
        {
        return vect.back();
        }
    }

    bool isEmpty(){
        return vect.empty();
    }
    int size(){
        return vect.size();
    }

    void display(){
        vector<int> :: iterator it;
        for (it = vect.end() -1; it >= vect.begin(); it--){
            cout << *it << " ";
    }
    }
};

int main()
{
    Stack st;
    st.push(12);
    st.push(52);
    st.push(14);
    st.push(16);
    cout << st.pop() << endl;
    
    cout << st.peek() << endl;
    cout << st.isEmpty() << endl;
    cout << st.size() << endl;
    
}

/*#include <bits/stdc++.h>
using namespace std;

struct Stack {
    vector<int> vect;

    void push(int val) {
        vect.push_back(val);
    }

    int pop() {
        if (isEmpty()) {
            return INT_MIN;
        }
        int temp = vect.back();
        vect.pop_back();
        return temp;
    }

    int peek() {
        if (isEmpty()) {
            cout << "The Stack is Empty" << endl;
            return INT_MIN;
        }
        return vect.back();
    }

    bool isEmpty() {
        return vect.empty();
    }

    int size() {
        return vect.size();
    }

    void display() {
        vector<int>::iterator it;
        for (it = vect.end() - 1; it >= vect.begin(); it--)
            cout << *it << " ";
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    s.display();
    return 0;
}*/