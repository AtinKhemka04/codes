<<<<<<< HEAD
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
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << "  ";
    inorder(root->right);
}
void flattern(node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    if (root->left != NULL)
    {
        flattern(root->left);
        node *temp = root->right;
        root->right = root->left;
        root->left = NULL;
        node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
        flattern(root->right);
    }
}
void printsubtreenodes(node *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data;
        return;
    }
    printsubtreenodes(root->left, k - 1);

    printsubtreenodes(root->right, k - 1);
}
int printnodesatk(node *root, node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        printsubtreenodes(root, k);
        return 0;
    }
    int dl = printnodesatk(root->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data <<"  ";
        }
        else
        {
            printsubtreenodes(root->right, k - dl - 2);
        }
        return 1 + dl;
    }
    int dr = printnodesatk(root->left, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data <<" ";
        }
        else
        {
            printsubtreenodes(root->left, k - dr - 2);
        }
        return 1 + dr;
    }
    return -1;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    /* root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    inorder(root);
    cout<<endl;
    flattern(root);
    inorder(root);*/
    printnodesatk(root, root->left, 1);
    cout << endl;
    return 0;
=======
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
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << "  ";
    inorder(root->right);
}
void flattern(node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    if (root->left != NULL)
    {
        flattern(root->left);
        node *temp = root->right;
        root->right = root->left;
        root->left = NULL;
        node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
        flattern(root->right);
    }
}
void printsubtreenodes(node *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data;
        return;
    }
    printsubtreenodes(root->left, k - 1);

    printsubtreenodes(root->right, k - 1);
}
int printnodesatk(node *root, node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        printsubtreenodes(root, k);
        return 0;
    }
    int dl = printnodesatk(root->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data <<"  ";
        }
        else
        {
            printsubtreenodes(root->right, k - dl - 2);
        }
        return 1 + dl;
    }
    int dr = printnodesatk(root->left, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data <<" ";
        }
        else
        {
            printsubtreenodes(root->left, k - dr - 2);
        }
        return 1 + dr;
    }
    return -1;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    /* root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    inorder(root);
    cout<<endl;
    flattern(root);
    inorder(root);*/
    printnodesatk(root, root->left, 1);
    cout << endl;
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}