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
void inorderPrint(node*root)
{
    if(root==NULL)
    return;
    inorderPrint(root->left);
    cout<<root->data<<endl;
    inorderPrint(root->right);
}
void postorderPrint(node*root)
{
    if(root==NULL)
    return;
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout<<root->data<<endl;
}
void preorderPrint(node*root)
{
    if(root==NULL)
    return;
    cout<<root->data<<endl;
    preorderPrint(root->left);
    preorderPrint(root->right);
}
int height(node*root)
{
    if(root==NULL)
    return 0;
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs) +1;
}
void printkthLevel(node*root, int n,int k)
{
    if(root==NULL)
    return;
    if(n<k)
    {
    printkthLevel(root->left,n+1,k);
    printkthLevel(root->right,n+1,k);
    }
    else if (n==k){
    cout<<root->data<<endl;
    }
    else return;
}
int main()
{
    node*root=build();
    // inorderPrint(root);
    cout<<endl;
    // postorderPrint(root);
    preorderPrint(root);
    cout<<height(root)<<endl;
    printkthLevel(root,0,3);
    return 0;
}

// tree:
// 1 2 4 8 -1 -1 -1 5 -1 9 -1 -1 3 6 -1 -1 7 -1 10 -1 -1

                            //        1             l0
                            //     2     3          l1
                            //    4 5   6 7         l2
                            //   8   9     10       l3