#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* previous;

    Node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
        this -> previous = nullptr;
    }
};

void showList(Node* &head)
{
    Node* temp  = head;

    while(temp != nullptr)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl; 
}

int getLength(Node* &head)
{
    Node* temp = head;

    int count = 0;

    while(temp != nullptr)
    {
        count++;
        temp = temp -> next;
    }

return count;
}

//tail node is provided to control  the code if the head and tail are insitially null
void insertAtHead(Node* &head,Node* &tail, int data)
{
    if(head == nullptr)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
    Node* temp = new Node(data);
    temp -> next = head ;
    head -> previous = temp;
    head = temp;
    }
}

//head node is provided to control  the code if the head and tail are insitially null
void insertAtTail(Node* & head, Node* &tail, int data)
{
    if(tail == nullptr)
    {
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
    Node* temp = new Node(data);
    temp -> previous = tail;
    tail -> next = temp;
    tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data)
{
    if(position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node * temp = head;
    
    int count  = 1;
    
    while(count < position - 1)
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == nullptr)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node* insertedNode = new Node(data);
    insertedNode -> next = temp -> next;
    temp -> next -> previous = insertedNode;
    temp -> next = insertedNode;
    insertedNode -> previous = temp;
}

int main()
{
    // Node* obj = new Node(10);

    //If we provide head and tail initially as null.
    Node* head = nullptr;
    Node* tail = nullptr;
    showList(head);
    cout<<endl;

    cout<<getLength(head)<<endl;;
    

    insertAtHead(head, tail, 45);
    showList(head);

    insertAtTail(head, tail, 1111);
    showList(head);
    insertAtPosition(head, tail, 2, 159);
    showList(head);

    insertAtPosition(head, tail, 1, 159);
    showList(head);


    insertAtPosition(head, tail, 5, 159);
    showList(head);
    cout<<getLength(head)<<endl;;


}
