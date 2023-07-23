#include <iostream>
#include <vector>
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
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "  ";
    preorder(root->left);
    preorder(root->right);
}
vector<node *> constructtrees(int start, int end)
{
    vector<node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }
    for (int i = start; i <= end; i++)
    {
        vector<node *> leftsubtrees = constructtrees(start, i - 1);
        vector<node *> rightsubtrees = constructtrees(i + 1, end);
        for (int j = 0; j < leftsubtrees.size(); j++)
        {
            node *left = leftsubtrees[j];
            for (int k = 0; k < rightsubtrees.size(); k++)
            {
                node *right = rightsubtrees[k];
                node *Node = new node(k);
                Node->left = left;
                Node->right = right;
                trees.push_back(Node);
            }
        }
    }
    return trees;
}
int main()
{
    vector<node *> totaltrees = constructtrees(1, 3);
    for (int i = 0; i < totaltrees.size(); i++)
    {
        cout << (i + 1) << ":";
        preorder(totaltrees[i]);
        cout << endl;
    }
    return 0;
}