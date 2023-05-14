#include <iostream>
using namespace std;

//! This will just give a Node structure. How it will looks?
struct Node
{
    int data;
    struct Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

//! This will just going to insert Node at the beginning of the Linked List
void insertAtHead(Node *&head, int data)
{
    // Create new Node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

//! This will going to add Node at the end of the Linked list
void insertAtTail(Node *&tail, int data)
{
    // Create new Node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

//! This will insert element at specific position
void insertAtPosition(Node *&head, int position, int data)
{
    int count = 1;

    // This will check if the position is first then it will call insertAtHead and put the element at first position
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        if (count == position)
        {
            break;
        }
        temp = temp->next;
    }

    if (count != position)
    {
        return;
    }

    Node *p = new Node(data);
    p->next = temp->next;
    temp->next = p;
}

//! This will just delete the Node
void deleteNode(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        head = temp->next;
        temp = head;
        return;
    }

    Node *p;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        if (count == pos - 1)
        {
            p = temp->next;
            break;
        }

        temp = temp->next;
    }
    temp->next = p->next;
    free(p);
}

//! This will Print each and every Element
void print(Node *head)
{
    // Create new Node
    Node *temp = head;

    // This will just traverse every node until it will get NULL ptr
    while (temp != NULL)
    {
        cout << "Data : " << temp->data << endl;
        temp = temp->next;
    }
}

//! Main function
int main()
{
    // Created a new Node
    Node *node1 = new Node(10);

    Node *head = node1;

    Node *tail = node1;

    // This will print value from back side....from tail to head
    // insertAtHead(head, 12);
    // insertAtHead(head, 15);
    // print(head);

    // This will print value from head to tail
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    // print(head);

    insertAtPosition(head, 4, 20);

    print(head);
    cout << "*************";

    deleteNode(head, 5);
    print(head);
}