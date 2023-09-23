#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top < (size - 1))
        {
            top++;
            arr[top] = element;
        }
        else
            cout << "Stack overflow" << endl;
    }

    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack underflow" << endl;
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
    }

    bool isempty()
    {
        if (top < 0)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (top == size)
            return true;
        else
            return false;
    }

    void diaplay()
    {
        if (top > 0)
        {

            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
        }
        else 
        cout << "Invalid";
    }
};

int main()
{
    Stack st(5);
    // st.push(12);
    // st.push(13);
    // st.push(14);
    // st.push(15);
    // st.push(16);
    // cout << st.isempty() << endl;
    // cout << st.isFull() << endl;
    // cout << st.peek() << endl;
    st.diaplay();
    // cout << st.peek() << endl;
}
// prepinsta prime method 
/*
#include <bits/stdc++.h>
 
using namespace std;
 
class Stack {
    int top;
    int MAX;
    int* a;
 
public:

    Stack(int size){
        top = -1;
        MAX = size;
        a = new int [MAX];
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void display();
};
 
bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
 
int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}

bool Stack::isFull()
{
    return (top == MAX - 1);
}

void Stack::display(){

    int i=0;
    if(top==-1){
        printf("The stack is empty .\n");
        return;
    }

    for(i = top ; i >=0 ; i--){
        printf("%d ",a[i]);
    }
    printf("\n\n");

}

int main()
{
    class Stack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    cout << s.isEmpty() << endl;
    cout << s.isFull() << endl;
    cout << s.pop() << " element popped from the stack\n";
    s.display();
 
    return 0;
}
*/