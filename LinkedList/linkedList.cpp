#include <iostream>
using namespace std;
//single linked list 
class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

int main()
{
    Node* node = new Node(10);
    insertAthead(node, 11);
    insertAthead(node, 12); 
    cout << node->data << endl;
    //cout << node->next << endl;
    return 0;
}