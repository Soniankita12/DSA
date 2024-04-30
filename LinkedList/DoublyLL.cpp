#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

// print doubly ll
void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// get length of ll
int getLength(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// insert at head
void insertAtHead(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
        return;
    }
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// inser at tail
void insertAtTail(node *&tail, node *&head, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        head = temp;
        return;
    }
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// insert at any position
void insertAtPosition(node *&tails, node *&head, int pos, int d)
{
    if (pos == 1)
    {
        insertAtHead(head, tails, d);
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
        insertAtTail(tails, head, d);
        return;
    }
    node *nodeatpos = new node(d);
    nodeatpos->next = temp->next;
    temp->next = nodeatpos;
    nodeatpos->prev = temp;
    temp->next->prev = nodeatpos;
}

// delete node at any pos
void deleteAtPos(node *&head, node *&tail, int pos)
{
    if(pos ==1)
    {
        node *temp= head;
        temp->next->prev =NULL;
        head=temp->next;;
        temp->next =NULL;
        delete temp;
        return;
    }
    node *curr =head;
    node *previous =NULL;
    int count =1;
    while(count<pos)
    {
      previous=curr;
      curr=curr->next;
      count++;

    }
    curr->prev = NULL;
    previous->next = curr->next;
    curr->next = NULL;

    delete curr;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = head;
    print(head);
    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 22);
    insertAtTail(tail, head, 29);
    print(head);
    print(tail);
    insertAtHead(head, tail, 112);
    insertAtTail(tail, head, 219);
    print(head);
    print(tail);
    insertAtPosition(tail, head, 7, 1);
    print(head);
    print(tail);
    cout << "length-: " << getLength(head) << endl;
}