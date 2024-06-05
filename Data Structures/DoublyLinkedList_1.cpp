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

    ~Node()
    {
        int value = this -> data;

        if(next != nullptr)
        {
            delete next;
            next = nullptr;
        }

        cout<<"Memory free for Node with data "<<value<<endl; 
    }
};

void insertAtHead(Node* &head, int data)
{
    Node* temp = new Node(data);
    temp -> next = head;
    head -> previous = temp;
    head = temp;

}

void insertAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    temp -> previous = tail;
    tail -> next = temp;
    tail = temp;
}

void insertAtanyPosition(Node* &head, Node* &tail, int position, int data)
{
    if(position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1)
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == nullptr)
    {
        insertAtTail(tail, data);
        return;
    }

    Node* insertedNode = new Node(data);
    insertedNode -> next = temp -> next;
    temp -> next -> previous = insertedNode;
    temp -> next =insertedNode;
    insertedNode -> previous = temp;

}

void deleteNode(Node* &head, int position)
{
    if(position == 1)
    {
        Node* temp = head;
        temp -> next -> previous = nullptr;
        head = temp -> next;
        temp -> next = nullptr;
        // temp = nullptr;
        delete temp;

    }
    else
    {
        Node* current = head;
        Node* previous = nullptr;

        int count = 1;
        while(count < position )
        {
            previous = current;
            current = current -> next;
            count++;
        }

        current -> previous = nullptr;
        previous -> next = current -> next;
        current -> next -> previous = previous;
        current -> next = nullptr;
        delete current;

    }

}

void showList(Node* &head)
{
    Node* temp = head;

    while(temp != nullptr)
    {
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    Node* obj = new Node(12);
    Node* head = obj;
    Node* tail = obj; 

    insertAtHead(head, 65);
    showList(head);

    insertAtTail(tail, 51);
    showList(head);

    insertAtanyPosition(head, tail, 1, 2);
    showList(head);

    insertAtanyPosition(head, tail, 3, 422);
    showList(head);

    insertAtanyPosition(head, tail, 6, 298);
    showList(head);

    // deleteNode(head, 2);
    // showList(head);

    deleteNode(head, 1);
    showList(head);

    deleteNode(head, 5);
    showList(head);


    cout<<"head "<< head -> data<<endl;
    cout<<"tail "<< tail -> data<<endl;

}
