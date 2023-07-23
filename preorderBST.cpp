#include <iostream>
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
node *constructBST(int preorder[], int *preorderindx, int key, int min, int max, int n)
{
    if (*preorderindx > n)
    {
        return NULL;
    }
    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preorderindx = *preorderindx + 1;
        if (*preorderindx < n)
        {
            root->left = constructBST(preorder, preorderindx, preorder[*preorderindx], min, key, n);
        }
        if (*preorderindx < n)
        {
            root->right = constructBST(preorder, preorderindx, preorder[*preorderindx], key, max, n);
        }
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void printpreorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printpreorder(root->left);
    printpreorder(root->right);
}
int search(int inorderr[], int start , int end, int val){
    for(int i=start; i<=end;i++){
        if(inorderr[i]== val){
            return i;
        }
    }
    return -1;
}
node* buildtree(int postorder[],int inorderr[],int start, int end){
    static int idx=4;
    if(start > end){
        return NULL;
    }
    int val=postorder[idx];
    idx--;
    node* curr=new node(val);
    if(start==end){
        return curr;
    }
    int pos=search(inorderr, start ,end, val);
    curr->right=buildtree(postorder, inorderr,pos+1, end);
    curr->left=buildtree(postorder,inorderr,start,pos-1);
    return curr;
}
int main()
{
   int preorder[] = {10, 2, 1, 13, 11};
    int preorderindx = 0;
    int n = 5;
    node *root = constructBST(preorder, &preorderindx, preorder[0], -111111, 99999999, n);
    inorder(root);
    cout << endl;
    printpreorder(root);
    cout<<endl;
    int postorder[]={4,2,5,3,1};
    int inorderr[]={4,2,1,5,3};
    node* root1=buildtree(postorder,inorderr ,0,4);
    inorder(root1);
    cout<<endl;
    printpreorder(root1);
    cout<<endl;

    return 0;
}