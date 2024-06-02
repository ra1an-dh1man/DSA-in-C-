//insert at the head
#include<iostream>
using namespace std;

class Node
{
    public: 

    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
    }
};  

void insertAtHead(Node* &head, int data)
{
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void showList(Node* &head)
{
    Node* temp = head;

    while(temp != nullptr)
    {
        cout<<temp -> data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}
int main()
{
    Node* node = new Node(10);
    Node* head = node;

    showList(head);

    insertAtHead(head, 65);
    showList(head);

    insertAtHead(head, 110);
    showList(head);

}
