#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free" << endl;
    }
};

void insertAfterElement(node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        node *newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
        return;
    }
    node *curr = tail;
    while (curr->data != element)
    {
        curr = curr->next;
    }
    node *temp = new node(d);
    temp->next = curr->next;
    curr->next = temp;
}
// print
void print(node *tail)
{
    node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
}

// delete 
void  deleteNode(node *&tail, int element)
{
    if(tail ==NULL)
    {
        return;
    }
    node *prev = tail;
    node *curr =prev->next;
    while(curr->data != element)
    {
        prev =curr;
        curr=curr->next;

    }
    prev->next=curr->next;
    //for onr node ll
    if(curr == prev )
    {
        tail=NULL;
    }
    // for 2 node ll
    if(tail == curr)
    {
        tail=prev;
    }
    curr->next = NULL;
    delete curr ;
}

int main()
{
    node *tail = NULL;
    insertAfterElement(tail, 5, 3);
    insertAfterElement(tail, 3, 5);
    insertAfterElement(tail, 3, 15);
    insertAfterElement(tail, 15, 16);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    deleteNode(tail, 16);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
}