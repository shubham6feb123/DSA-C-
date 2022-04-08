#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

Node* inserBST(Node* root,int val){
if(root==NULL){
    return new Node(val);
}

if(val<root->data){
    root->left = inserBST(root->left,val);
}else{
    root->right = inserBST(root->right,val);
}

return root;
}

void inOrder(Node* root){
     if(root==NULL)return;
        
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
}

Node* searchBST(Node* root,int key){
    if(root==NULL) return NULL;

    if(root->data==key){
        return root;
    }

    if(root->data<key){
       return searchBST(root->right,key);
    }


        return searchBST(root->left,key);
}
int main()
{
    Node* root = NULL;
    root = inserBST(root,3);
    inserBST(root,2);
    inserBST(root,1);
    inserBST(root,7);
    inserBST(root,5);
    inserBST(root,4);
    inserBST(root,6);
    inserBST(root,8);
    inOrder(root);
    cout<<endl;
   Node* searched = searchBST(root,4);
   if(searched!=NULL){ 
    cout<<"searched element "<<searched->data<<endl;
   }else{
       cout<<"Element Not Found!!!!"<<endl;
   }
    return 0;
}