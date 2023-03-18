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
node* build()
{
    int data;
    cin>>data;
    if(data==-1)
    return NULL;
    node*root=new node(data);
    root->left=build();
    root->right=build();
    return root;

}
void print(node*root)
{
    if(root==NULL)
    return;
    cout<<root->data<<endl;
    print(root->left);
    print(root->right);
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
int main()
{
    node*root=build();
    bfsPrint(root);
    return 0;
}
// tree:
// 1 2 4 8 -1 -1 -1 5 -1 9 -1 -1 3 6 -1 -1 7 -1 10 -1 -1

                            //        1             l0
                            //     2     3          l1
                            //    4 5   6 7         l2
                            //   8   9     10       l3