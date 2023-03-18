#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        right=NULL;
        left=NULL;
    }
};
// accepts the old root node and data, and return the new root node
node* insertInBST(node* root, int data)
{
    if(root==NULL)
    return new node(data);
    
    if(data<=root->data)
    {
        root->left=insertInBST(root->left,data);
    }
    else
    {
        root->right=insertInBST(root->right,data);
    }
    
    return root;
}
node* build(){
    //reads a list of numbers till -1 and also these numbers will be inserted in BST
    int d;
    cin>>d;
    node*root=NULL;
    while(d!=-1)
    {
        root=insertInBST(root,d);
        cin>>d;
    }
    return root;
}
void print(node*root)
{
    if(root==NULL)
    return;
    print(root->left);
    cout<<root->data<<endl;
    print(root->right);
}