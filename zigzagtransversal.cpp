<<<<<<< HEAD
#include <iostream>
#include <stack>
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
void zigzag(node *root)
{
    if(root==NULL){
        return;
    }
    stack<node *> currlevel;
    stack<node *> nxtlevel;
    bool lefttoright = true;
    currlevel.push(root);
    while (!currlevel.empty())
    {
        node *temp = currlevel.top();
        currlevel.pop();
        if (temp)
        {
            cout << temp->data << " ";
            if (lefttoright)
            {
                if (temp->left)
                {
                    nxtlevel.push(temp->left);
                }
                if (temp->right)
                {
                    nxtlevel.push(temp->right);
                }
            }

            else
            {
                if (temp->right)
                {
                    nxtlevel.push(temp->right);
                }
                if (temp->left)
                {
                    nxtlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty()){
            lefttoright=!lefttoright;
            swap(currlevel,nxtlevel);
        }
    }
}
int main(){
      node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->right=new node(9);
    zigzag(root);
    cout<<endl;
    return 0;
=======
#include <iostream>
#include <stack>
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
void zigzag(node *root)
{
    if(root==NULL){
        return;
    }
    stack<node *> currlevel;
    stack<node *> nxtlevel;
    bool lefttoright = true;
    currlevel.push(root);
    while (!currlevel.empty())
    {
        node *temp = currlevel.top();
        currlevel.pop();
        if (temp)
        {
            cout << temp->data << " ";
            if (lefttoright)
            {
                if (temp->left)
                {
                    nxtlevel.push(temp->left);
                }
                if (temp->right)
                {
                    nxtlevel.push(temp->right);
                }
            }

            else
            {
                if (temp->right)
                {
                    nxtlevel.push(temp->right);
                }
                if (temp->left)
                {
                    nxtlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty()){
            lefttoright=!lefttoright;
            swap(currlevel,nxtlevel);
        }
    }
}
int main(){
      node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->right=new node(9);
    zigzag(root);
    cout<<endl;
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}