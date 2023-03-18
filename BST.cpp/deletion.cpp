// consider cases with node having 0,1,2 children individually.
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
node* deleteNode(node*root, int data)
{
    if(root==NULL)
    return NULL;
    else if(root->data>data)
    {
        root->left=deleteNode(root->left,data);
        return root;
    }
    else if (root->data==data)
    {
        // found the node
        //1. node with 0 children
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            return NULL;
        }
        // 1 children
        else if ((root->left!=NULL&&root->right==NULL))
        {
            node*temp=root->left;
            delete root;
            return temp;
        }
        else if ((root->left==NULL&&root->right!=NULL))
        {
            node*temp=root->right;
            delete root;
            return temp;
        }
        // 2 children
        else 
        {
            node*temp=root->right;
            // node*temp2=root->right;
            // find the inorder successor from right subtree
            while(temp->left!=NULL)
            {
                temp=temp->left;
            }
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
            // iterative method of deleting last node.
            // while(temp2->left!=temp)
            // {
            //     temp2=temp2->left;
            // }
            // temp2->left=NULL;
            // delete temp;
            return root;
        }
    }
    else
    {
        root->right=deleteNode(root->right,data);
        return root;
    }
}
int main()
{
    node* root=build();
    root=deleteNode(root,3);
    print(root);
    return 0;
}