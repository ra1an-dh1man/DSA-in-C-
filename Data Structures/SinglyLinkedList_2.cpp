//insert element at the tail
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void showList(Node* &head)
{
    Node* temp = head;

    while(temp != nullptr)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }   
    cout<<endl;
}
int main()
{
    Node* obj = new Node(10);
    Node* head = obj;
    Node* tail = obj;

    insertAtTail(tail, 23);
    insertAtTail(tail, 69);

    showList(head);

}
