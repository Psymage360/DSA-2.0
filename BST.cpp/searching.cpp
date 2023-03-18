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
void bfsPrint(node*root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        cout<<q.front()->data<<endl;
        q.pop();
//A zero value, null pointer value, or null member pointer value is converted to false
        if(temp->left)      
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}
bool search(node*root, int key)
{
    if(root==NULL)
    return false;
    if(root->data==key)
    return true;
    if(root->data<key)
    return search(root->right,key);
    else return search(root->left,key);
}
void print(node*root)
{
    if(root==NULL)
    return;
    print(root->left);
    cout<<root->data<<endl;
    print(root->right);
}
int main()
{
    node*root=build();
    print(root);
    cout<<search(root,3)<<endl;
    return 0;
}
// tree:
// 1 2 4 8 3 5 16 9 6 -1