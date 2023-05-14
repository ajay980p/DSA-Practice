#include <iostream>
using namespace std;

int main()
{
    cout << "Hello";
}
/*

SinglyLinkedListNode *reverse(SinglyLinkedListNode *llist)
{

    SinglyLinkedListNode *curr = llist;
    SinglyLinkedListNode *prev = NULL;
    SinglyLinkedListNode *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

*/