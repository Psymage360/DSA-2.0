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
int countNode(node*root)
{
    if(root==NULL)
    return 0;
    int l=countNode(root->left);    
    int r=countNode(root->right);
    return l+r+1;  //equals 1+nodes in leftSubTree and RightSubTree
}
int main()
{
    node*root=build();
    cout<<"Number of nodes are "<<countNode(root)<<endl;
    return 0;
}
// tree:
// 1 2 4 8 -1 -1 -1 5 -1 9 -1 -1 3 6 -1 -1 7 -1 10 -1 -1

                            //        1             l0
                            //     2     3          l1
                            //    4 5   6 7         l2
                            //   8   9     10       l3