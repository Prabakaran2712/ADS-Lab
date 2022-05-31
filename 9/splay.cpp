#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int key;
    node *left, *right;
};
node* newNode(int key)
{
    node* Node = new node();
    Node->key = key;
    Node->left = Node->right = NULL;
    return (Node);
}
 node *rightRotate(node *x)
{
    node *y = x->left;
    x->left = y->right;
    y->right = x;
    return y;
}
 node *leftRotate(node *x)
{
    node *y = x->right;
    x->right = y->left;
    y->left = x;
    return y;
}
node *splay(node *root, int key)
{
    if (root == NULL || root->key == key)
        return root;
    if (root->key > key)
    {
        if (root->left == NULL) return root;
 
        if (root->left->key > key)
        {
            root->left->left = splay(root->left->left, key);
            root = rightRotate(root);
        }
        else if (root->left->key < key) 
        {
            root->left->right = splay(root->left->right, key);
 
            if (root->left->right != NULL)
                root->left = leftRotate(root->left);
        }
 
        return (root->left == NULL)? root: rightRotate(root);
    }
    else 
    {
       
        if (root->right == NULL) return root;
 
        if (root->right->key > key)
        {
            
            root->right->left = splay(root->right->left, key);
 
            
            if (root->right->left != NULL)
                root->right = rightRotate(root->right);
        }
        else if (root->right->key < key)
        {
            
            root->right->right = splay(root->right->right, key);
            root = leftRotate(root);
        }
 
       
        return (root->right == NULL)? root: leftRotate(root);
    }
}
 

node *insert(node *root, int k)
{
   
    if (root == NULL) return newNode(k);

    root = splay(root, k);
 
    
    if (root->key == k) return root;
 
 
    node *newnode = newNode(k);
 
    if (root->key > k)
    {
        newnode->right = root;
        newnode->left = root->left;
        root->left = NULL;
    }
    else
    {
        newnode->left = root;
        newnode->right = root->right;
        root->right = NULL;
    }
 
    return newnode; 
}

void preorder(node *root)
{
    
    if (root != NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    cout<<"\n";
}
node* delete_key(struct node *root, int key)
{
    node *temp;
    if (!root)
        return NULL;
    root = splay(root, key);
    if (key != root->key)
        return root;
    if (!root->left)
    {
        temp = root;
        root = root->right;
    }
    else
    {
        temp = root;
        root = splay(root->left, key);
        root->right = temp->right;
    }
    
    free(temp);
    return root;
      
}
   
void help(){
    cout<<"1>>Insert\n2>>Delete\n3>>Display\n4>>splay\n5>>exit\n";
}
int main(){
    int choice;
    node *root=NULL;
    while(1){
        cout<<"0>>help\n";
        cin>>choice;
        if(choice==0){
            help();
        }
        else if(choice==1){
            int x;
            cout<<"Enter the number to be inserted : \n";
            cin>>x;
            root=insert(root,x);
        }
        else if(choice==2){
            int x;
            cout<<"Enter the number to be inserted : \n";
            cin>>x;
            root=delete_key(root,x);
        }
        else if(choice==3){
            preorder(root);
        }
        else if(choice==4){
             int x;
            cout<<"Enter the number to be splayed : \n";
            cin>>x;
            root=splay(root,x);
            preorder(root);
        }
        else if(choice==5){
break;
        }
        else{
            cout<<"Enter a valid choice (0-4)\n";
        }
    }
    
}