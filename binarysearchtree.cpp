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
node *insertBST(node *root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(root->data >val){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;
}
void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
node *searchBST(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data > key){
        return searchBST(root->left,key);
    }
    return searchBST(root->right,key);
}
node* inordersucc(node *root){
    node *curr=root;
    while(curr&&curr->left !=NULL){
        curr=curr->left;
    }
    return curr;
}
bool checkBST(node*root,node* minvalue,node* maxvalue){
    if(root==NULL){
        return true;
    }
    if(minvalue!=NULL &&root->data <= minvalue->data){
        return false;
    }
    if(maxvalue!=NULL &&root->data >= maxvalue->data){
        return false;
    }
    bool leftvalid=checkBST(root->left,minvalue,root);
    bool rightvalid=checkBST(root->right,root,maxvalue);
    return leftvalid and rightvalid;
}
node *balabcedBST(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
        int mid=(start+end)/2;
        node *root1=new node(arr[mid]);
        root1->left=balabcedBST(arr,start,mid-1);
        root1->right=balabcedBST(arr,mid+1,end);
        return root1;
    
}
node* delbst(node* root,int key){
    if(root->data > key){
        root->left=delbst(root->left,key);
    }
    else if (root->data < key)
    {
        root->right = delbst(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }

        if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node* temp=inordersucc(root->right);
        root->data = temp->data;
        root->right=delbst(root->right,temp->data);
     }
     return root;
}
int main(){
    node *root=NULL;

    root= insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    inorder(root); 
    
    if(searchBST(root,7)==NULL){
        cout<<" \n not exist \n";
    }
    else{
        cout<<" \n exist \n";
    }
    root=delbst(root,3);
    inorder(root);
    cout<<endl;
    if(checkBST(root,NULL,NULL)){
        cout<<"valid BST"<<endl;
    }
    else{
        cout<<"invalid BST"<<endl;
    }
    int arr[]={10,20,30,40,50};
    node *root1=balabcedBST(arr,0,4);
    inorder(root1);
    cout<<endl;
    return 0;
}