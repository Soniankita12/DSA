#include <bits/stdc++.h>
using namespace std;
// creating linked list
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free" << endl;
    }
};
// insertion at head
void insertAtHead(node *&Head, int d)
{
    node *temp = new node(d);
    temp->next = Head;
    Head = temp;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
    cout << endl;
}

// insert at tail
void insertAtTail(node *&tail, int n)
{
    node *temp = new node(n);
    tail->next = temp;
    tail = temp;
}

// insert at position
void insertAtPosition(node *&tail, node *&head, int pos, int d)
{
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    node *node2insert = new node(d);
    node2insert->next = temp->next;
    temp->next = node2insert;
}

// delete node at given position
void deleteNode(int pos, node *&head)
{
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *current = head;
        node *previous = NULL;
        int count = 1;
        while (count < pos)
        {
            previous = current;
            current = current->next;
            count++;
        }
        if (current->next == NULL)
        {
            previous->next = NULL;
            return;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main()
{
    node *seco = new node(10);
    node *tail = seco;
    node *head = seco;
    // cout << seco->data << endl;
    print(seco);
    insertAtHead(seco, 19);
    print(seco);
    insertAtHead(seco, 9);
    print(seco);
    insertAtHead(seco, 20);
    print(seco);
    insertAtTail(tail, 27);
    print(tail);
    print(seco);
    insertAtPosition(tail, seco, 6, 45);
    print(seco);
    deleteNode(6, seco);
    print(seco);
    cout << seco->data << " " << tail->data << endl;

    // cout<< seco->data << endl;
    // print(seco);

    // node *nn = head;
    // head->next =seco;
    // head=head->next;
    // cout << nn->data << " " << nn->next << endl;
    // cout << head->data << " "; //<< head->next << endl;
}