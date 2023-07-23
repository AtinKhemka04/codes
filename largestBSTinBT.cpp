#include <iostream>
#include <limits>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
struct info
{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};
info largestBSTinBT(node* root)
{
    if (root == NULL)
    {
        return {0, -999999, 1111111, 0, true};
    }
    if(root->left==NULL && root->right==NULL){
        return {1,root->data,root->data,1,true};
    }
    info leftinfo=largestBSTinBT(root->left);
    info rightinfo=largestBSTinBT(root->right);
    info curr;
    curr.size=(1+leftinfo.size +rightinfo.size);
    if(leftinfo.isBST && rightinfo.isBST && leftinfo.max < root->data && rightinfo.min > root->data){
        curr.min=min(leftinfo.min ,min(rightinfo.min , root->data));
          curr.max=max(leftinfo.max ,max(rightinfo.max , root->data));
          curr.ans=curr.size;
          curr.isBST=true;
          return curr;
    }
    curr.ans=max(leftinfo.ans , rightinfo.ans);
    curr.isBST=false;
    return curr;
}
int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<"largest BST in BT:"<<largestBSTinBT(root).ans;
    cout<<endl;
    return 0;
}