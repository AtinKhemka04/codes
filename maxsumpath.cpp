<<<<<<< HEAD
#include <iostream>
using namespace std;
#define INT_MIN -3000;
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
int maxpathsumutil(node *root,int &ans){
    if(root==NULL){
        return 0;
    }
    int left=maxpathsumutil(root->left,ans);
    int right=maxpathsumutil(root->right,ans);
    int nodemax=max(max(root->data,root->data+ left + right),max(root->data + left,root->data +right));
    ans=max(ans,nodemax);
    int singlepathsum=max(root->data,max(root->data +left,root->data + right));
    return singlepathsum;
}
int maxpathsum(node *root){
    int ans=INT_MIN;
    maxpathsumutil(root,ans);
    return ans;
}
int main()
{
    node *root = new node(1);
    root->left = new node(-12);
    root->right = new node(3);
    root->left->left = new node(-4);
    root->left->right=new node(5);
    root->right->left=new node(-6);
    root->right->right=new node(7);
    cout<<maxpathsum(root)<<endl;
    return 0;
=======
#include <iostream>
using namespace std;
#define INT_MIN -3000;
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
int maxpathsumutil(node *root,int &ans){
    if(root==NULL){
        return 0;
    }
    int left=maxpathsumutil(root->left,ans);
    int right=maxpathsumutil(root->right,ans);
    int nodemax=max(max(root->data,root->data+ left + right),max(root->data + left,root->data +right));
    ans=max(ans,nodemax);
    int singlepathsum=max(root->data,max(root->data +left,root->data + right));
    return singlepathsum;
}
int maxpathsum(node *root){
    int ans=INT_MIN;
    maxpathsumutil(root,ans);
    return ans;
}
int main()
{
    node *root = new node(1);
    root->left = new node(-12);
    root->right = new node(3);
    root->left->left = new node(-4);
    root->left->right=new node(5);
    root->right->left=new node(-6);
    root->right->right=new node(7);
    cout<<maxpathsum(root)<<endl;
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}