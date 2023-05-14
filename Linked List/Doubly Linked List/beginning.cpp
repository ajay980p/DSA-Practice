#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev, *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "Data : " << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;

    insertAtHead(head, 12);
    print(head);
}