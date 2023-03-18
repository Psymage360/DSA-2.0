// only checking that left subtree and  right subtree and right subtree are bst isnt enough.
// also have to check that the root-> data is > max of leftSubtree && < minimum of rightSubtree.

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
node* buildTree()
{
    int data;
    cin>>data;
    if(data==-1)
    return NULL;
    node*root=new node(data);
    root->left=buildTree();
    root->right=buildTree();
    return root;

}
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
node* buildBST(){
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
bool isBST(node*root, int minv= INT_MIN, int maxv= INT_MAX)
{
    if(root==NULL)
    return true;
    if(root->data>minv&&root->data<maxv&& isBST(root->left,minv, root->data)&& isBST(root->right,root->data,maxv))
    return true;
    return false;
}
int main()
{
    node* root=buildTree();
    cout<<isBST(root)<<endl;
    root=buildBST();
    cout<<isBST(root)<<endl;
    return 0;
}