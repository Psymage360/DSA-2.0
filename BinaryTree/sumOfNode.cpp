// replace each node by sum of nodes
// dont change leaf nodes
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
void print(node*root)   //preOrder Print.
{
    if(root==NULL)
    return;
    cout<<root->data<<endl;
    print(root->left);
    print(root->right);
}
int sumNodes(node*root)
{
    if(root==NULL)
    return 0;
    // if(root->left==NULL && root->right==NULL)
    // return root->data;
    int sum=root->data+sumNodes(root->left)+sumNodes(root->right);
    return sum;
}
void update(node*&root)
{
    if(root==NULL)
    return;
    if(!(root->left==NULL&&root->right==NULL))
    root->data=sumNodes(root)-root->data;
    update(root->left);
    update(root->right);
}
int main()
{
    node*root=build();
    cout<<sumNodes(root)<<" "<<sumNodes(root->left)<<" "<<sumNodes(root->right)<<endl;
    print(root);
    update(root);
    print(root);
    return 0;
}
// tree:
// 1 2 4 8 -1 -1 -1 5 -1 9 -1 -1 3 6 -1 -1 7 -1 10 11 -1 -1 12 -1 -1

                            //        1             l0
                            //     2     3          l1
                            //    4 5   6 7         l2
                            //   8   9     10       l3
                            //           11  12     l4 