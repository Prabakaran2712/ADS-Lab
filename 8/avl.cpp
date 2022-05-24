#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node* left;
    node* right;
    int height;
    int val;
};
int getheight(node* root){
    if(root==NULL){
        return 0;
    }
  return root->height;
}
int getblance(node *root){
if(root==NULL)return 0;
else{
    return getheight(root->left)-getheight(root->right);
}
}
node *rightrotate(node *root){
node *x=root->left;
node *t2=x->right;
x->right=root;
root->left=t2;
root->height=max(getheight(root->left),getheight(root->right))+1;

x->height=max(getheight(x->left),getheight(x->right))+1;
return x;
}
node *leftrotate(node *root){
node *x=root->right;
node *t2=x->left;
x->left=root;
root->right=t2;
root->height=max(getheight(root->left),getheight(root->right))+1;

x->height=max(getheight(x->left),getheight(x->right))+1;
return x;
}
node* newnode(int key){
    node* newnode=new node();
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->val=key;
    newnode->height=1;
    return newnode;

}
int getHeight(node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return(1+max(getheight(root->left),getheight(root->right)));
    }
}
node* insert2(node *root,int key){

    if(root==NULL){
        return newnode(key);
    }
    else if(key<root->val){
        cout<<"tes";
        root->left=insert2(root->left,key);
    }
    else if(key>root->val){
        root->right=insert2(root->right,key);
    }
    else {
        return root;
    }
    root->height=getHeight(root);
    int balance=getblance(root);
    if(balance>1 && key<root->left->val){
        return rightrotate(root);
    }
    if(balance>1 && key>root->left->val){
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    if(balance<1 && key>root->right->val){
    return leftrotate(root);
    }
    if(balance<1 && key<root->right->val){
         root->right=rightrotate(root->right);
        return rightrotate(root);
    }
    return root;
}
node* insert(node* node, int key)
{
   
    if (node == NULL)
        return(newnode(key));
 
    if (key < node->val)
        node->left = insert(node->left, key);
    else if (key > node->val)
        node->right = insert(node->right, key);
    else 
        return node;
 

    node->height = 1 + max(getheight(node->left),
                        getheight(node->right));
 
  
    int balance = getblance(node);
 
    
    if (balance > 1 && key < node->left->val)
        return rightrotate(node);
 
    
    if (balance < -1 && key > node->right->val)
        return leftrotate(node);
 
   
    if (balance > 1 && key > node->left->val)
    {
        node->left = leftrotate(node->left);
        return rightrotate(node);
    }
 
    
    if (balance < -1 && key < node->right->val)
    {
        node->right = rightrotate(node->right);
        return leftrotate(node);
    }
 
    
    return node;
}
void preorder(node *root)
{
    if(root != NULL)
    {
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
node * minValueNode(node* root)
{
    node* current = root;
 
   
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
 
node* deleteNode(node* root, int key)
{
     
    
    if (root == NULL)
        return root;
 
    
    if ( key < root->val )
        root->left = deleteNode(root->left, key);
 
   
    else if( key > root->val )
        root->right = deleteNode(root->right, key);
 
    else
    {
        
        if( (root->left == NULL) ||
            (root->right == NULL) )
        {
            node *temp = root->left ?
                         root->left :
                         root->right;
 
            
            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else 
            *root = *temp; 
                           
            free(temp);
        }
        else
        {
            
            node* temp = minValueNode(root->right);
 
          
            root->val = temp->val;
 
            
            root->right = deleteNode(root->right,
                                     temp->val);
        }
    }
 
  
    if (root == NULL)
    return root;
 
  
    root->height = 1 + max(getheight(root->left),
                           getheight(root->right));
 
   
    int balance = getblance(root);
 
    
 
    if (balance > 1 && key < root->left->val)
        return rightrotate(root);
 
    
    if (balance < -1 && key > root->right->val)
        return leftrotate(root);
 
    if (balance > 1 && key > root->left->val)
    {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }
 
    
    if (balance < -1 && key < root->right->val)
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
 
    
    return root;
}
 
int main(){
    int choice;
    node *root=NULL;
    while (1)
    {
        cout<<"0>>help\n";
        cin>>choice;
        if (choice==-1){
            break;
        }
        else{
        if(choice==1){
            int x;
            cout<<"Enter the node to be inserted";
            cin>>x;
            root=insert2(root,x);

        }
        else if(choice==2){
            cout<<"Deletion\n";
             int x;
            cout<<"Enter the node to be deleted";
            cin>>x;
            root=deleteNode(root,x);
        }
        else if(choice==3){
            preorder(root);
        }
        else if(choice==0){
            cout<<" 1)Insert\n 2)Delete\n 3)Display\n-1)Exit";
        }
        }
    }
    
    return 0;
}

