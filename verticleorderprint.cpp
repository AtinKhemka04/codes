#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define vi vector<int>
struct node{
    int key;
    node *left,*right;
};
node* newnode(int key){
    node *Node=new node;
    Node->key=key;
    Node->left=Node->right=NULL;
    return Node;
}
void getverticleorder(node *root, int hdis, map<int,vi>&m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->key);
    getverticleorder(root->left, hdis-1, m);
    getverticleorder(root->right,hdis+1,m);

}
int main()
{
    node *root = newnode(10);
    root->left = newnode(7);
    root->right = newnode(4);
    root->left->left = newnode(3);
    root->left->right = newnode(11);
    root->right->left = newnode(14);
    root->right->right = newnode(6);
    map<int,vector<int>>m;
    int hdis=0;
    getverticleorder(root,hdis,m);
    map<int,vi> :: iterator it;
    for(it=m.begin(); it!=m.end();it++){
        for(int i=0;i<(it->second).size();i++){
            cout<<(it->second)[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}