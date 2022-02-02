#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct node
    {
        int data;
        node *next;
    };
    node *head, *temp, *newnode1, *newnode2, *newnode3;

    newnode1 = new node();
    newnode1->data = 10;
    head = newnode1;

    newnode2 = new node();
    newnode2->data = 20;
    newnode1->next = newnode2;

    newnode3 = new node();
    newnode3->data = 30;
    newnode2->next = newnode3;
    newnode3->next = 0;

    cout << "Before Reversing: "
         << "\n";
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
    // Reversing the linked list with iterative method
    node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
    cout << "After Reversing: "
         << "\n";
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
    return 0;
}