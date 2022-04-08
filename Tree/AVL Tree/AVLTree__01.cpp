#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    int height;
    node(int data){
     this->data = data;
     left = NULL;
     right = NULL;
    //  this->height=height;
    }
};

int getHeight(node* root){
if(root==NULL) return 0;
return max(getHeight(root->left),getHeight(root->right))+1;
}

int getBalanceFactor(node* root){
if(root==NULL)return 0;
return getHeight(root->right)-getHeight(root->left);
}

node* rightRotate(node* y){
node* x = y->left;
node* T2 = x->right;

x->right = y;
y->left = T2;

y->height = getHeight(y);
x->height = getHeight(x);

return x;
}

node* leftRotate(node* x){
node* y = x->right;
node* T2 = y->left;

y->left = x;
x->right = T2;

y->height = getHeight(y);
x->height = getHeight(x);

return y;
}

node* insert(node* root, int data){
      if(root==NULL){
          return new node(data);
      }

      if(data<root->data){
          root->left = insert(root->left,data);
      }else if(data>root->data){
         root->right = insert(root->right,data);
      }

       root->height = getHeight(root);
      int bf = getBalanceFactor(root);
      
      return root;
    cout<<"insert se root return krne k baad"<<endl;
      //Left Left case
        if(bf>1&&data<root->left->data){
           return rightRotate(root);
        }
      //Right Right case
        if(bf<-1&&data>root->right->data){
           return leftRotate(root);
        }
      //Left Right casef
         if(bf<-1&&data>root->left->data){
           root->left = leftRotate(root->left);
          return rightRotate(root);
         }
      //Right Left case
          if(bf>1&&data<root->right->data){
           root->right = leftRotate(root->right);
          return leftRotate(root);
         } 

}

 void inorder(node* root){
        if(root==NULL)return;
        
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
 }
int main()
{
    node* root=NULL;
    root = insert(root,45);
        insert(root,31);
        insert(root,70);
        insert(root,15);
        insert(root,40);
        insert(root,39);
        inorder(root);
    return 0;
}