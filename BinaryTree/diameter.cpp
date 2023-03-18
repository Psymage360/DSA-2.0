// diameter is max(h(left)+h(right)+1,diameter(left),diameter(right))
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
int height(node*root)
{
    if(root==NULL)
    return 0;
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs) +1;
}
int diameter(node*root)
{
    if(root==NULL)
    return 0;
    return max(height(root->left)+height(root->right)+1,max(diameter(root->left),diameter(root->right)));
}
int main()
{
    node*root=build();
    cout<<"diameter is "<<diameter(root)<<endl;
    return 0;
}
// tree:
// 1 2 4 8 -1 -1 -1 5 -1 9 -1 -1 3 6 -1 -1 7 -1 10 -1 -1

                            //        1             l0
                            //     2     3          l1
                            //    4 5   6 7         l2
                            //   8   9     10       l3