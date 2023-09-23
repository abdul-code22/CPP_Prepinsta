#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class StackLinked{
    private:
    Node *top;
    public :
    StackLinked(){
        top = NULL;
    }

    void push (int data){
        Node *n = new Node(data);
        if (top == NULL)
        top = n;
        else
        {
            n -> next = top;
            top = n;
        }
        
    }

    int pop (int data){
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else{
            int tempData = top->data;
            Node *temp = top;
            top = top->next;
            delete temp;
            return tempData;
        } 
    }

    /*int peek(){
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        return *top;
    }*/
};

int main ()
{
    StackLinked s;
    s.push(12);
    s.push(712);
    s.push(2);
    

}