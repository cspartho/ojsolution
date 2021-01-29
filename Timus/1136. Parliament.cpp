#include<bits/stdc++.h>
using namespace std;
stack<int>vt;

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void preorder(struct node *root)
{
    if (root == NULL)
        return;
    int x=root->key;
    vt.push(x);
    preorder(root->left);
    preorder(root->right);
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}


int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    struct node *root = NULL;
    root = insert(root, arr[n-1]);
    for(int i=n-2; i>=0; i--)
    {
        insert(root, arr[i]);
    }
    preorder(root);
    while(!vt.empty())
    {
        cout<<vt.top()<<endl;
        vt.pop();
    }
    cout<<endl;
    return 0;
}
