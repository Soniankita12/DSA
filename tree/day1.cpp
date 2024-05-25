// bianry tree and its code
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void printTree(node *root)
{
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void printInorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // 1st traverse left part of tree
    printInorder(root->left);
    // print data
    cout << root->data << " ";
    // lastly travesrse right
    printInorder(root->right);
}

int main()
{
    node *tree = new node(10);
    tree->left = new node(5);
    tree->right = new node(3);
    tree->right->left = new node(2);
    tree->right->right = new node(7);
    tree->left->left = new node(9);
    tree->left->right = new node(6);
    cout << "inorder traversal" << "\n";
    printInorder(tree);

    cout << "\n"<< "preordertraversal" << "\n";
    preorder(tree);
    cout << "\n"<< "postordertraversal" << "\n";
    postorder(tree);

}