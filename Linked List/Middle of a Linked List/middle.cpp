#include <iostream>
using namespace std;

int main()
{
    cout << "Hello";
}

/*
    int len = 0;
    int mid = 0;
    int count = 0;

    Node *temp = head;

    if (head == NULL)
    {
        return -1;
    }

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    mid = len / 2 + 1;
    Node *p = head;

    while (p != NULL)
    {
        count++;
        if (count == mid)
        {
            return p->data;
        }
        p = p->next;
    }
*/