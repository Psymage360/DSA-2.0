#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
bool pathFunc(TreeNode * root, vector <int>&nums, int val)
{
    if (!root)
    return false;
    nums.push_back(root -> data);
    if (root -> data == val)
    return true;
    if (pathFunc(root -> left, nums, val) ||pathFunc(root -> right, nums, val))
    return true;
    nums.pop_back();
    return false;
}
int main()
{
    TreeNode *head = new TreeNode(1);
    head->left = new TreeNode(2);
    head->right = new TreeNode(3);
    head->left->left=new TreeNode(4);
    head->left->right=new TreeNode(5);
    head->left->left->right=new TreeNode(7);
    head->left->right->right=new TreeNode(6);
    vector<int> st;
    pathFunc(head, st, 6);
    for(int i=0;i<st.size();i++)
    {
        cout << st[i] << " ";
    }
    return 0;
}