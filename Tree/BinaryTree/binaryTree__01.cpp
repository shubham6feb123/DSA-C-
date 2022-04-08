#include <iostream>
#include <math.h>
#include <limits>
#include <queue>
#include <vector>
#include<map>
using namespace std;
class Node
{
public:
    Node *left;
    Node *right;
    int data;

    Node(int data)
    {
        this->data = data;
    }
};

Node *createTree()
{
    Node *root = NULL;
    int data;
    cout << "Enter data : ";
    cin >> data;
    if (data == -1)
        return NULL;

    root = new Node(data);
    cout << "Enter left for " << data << endl;
    root->left = createTree();

    cout << "Enter right for " << data << endl;
    root->right = createTree();

    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";

    preorder(root->left);

    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);

    postorder(root->right);

    cout << root->data << " ";
}

void levelorder(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        // cout << temp->left->data << endl;
        // cout << endl; // next line
        if (temp->left)
        {
            q.push(temp->left);
        }

        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}
int heightOfTree(Node *root)
{
    if (root == NULL)
        return 0;

    return max(heightOfTree(root->left), heightOfTree(root->right)) + 1;
}

int size(Node *root)
{
    if (root == NULL)
        return 0;

    return size(root->left) + size(root->right) + 1;
}

int maximun(Node *root)
{
    if (root == NULL)
        return int(-1 * INFINITY);

    return max(root->data, max(maximun(root->left), maximun(root->right)));
}

int diameter(Node *root)
{
    if (root == NULL)
        return 0;

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = heightOfTree(root->left) + 1 + heightOfTree(root->right);

    return max(max(op1, op2), op3);
}

bool isBalancedTree(Node *root)
{
    if (root == NULL)
        return true;

    bool left = isBalancedTree(root->left);
    bool right = isBalancedTree(root->right);

    bool difference = abs(heightOfTree(root->left) - heightOfTree(root->right)) <= 1 ? true : false;

    if (left && right && difference)
        return true;

    return false;
}

void printLeftView(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();

        cout << temp->data << " ";

        if (!temp->left && !temp->right)
        {
            q.pop();
            temp = q.front();
        }

        q.pop();
        if (!q.empty())
            q.pop();

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }
};


void printLeftViewUtil(Node* root,int level,vector<Node*>&list){
// cout<<"in printLeftViewUtil function"<<endl;

if(root==NULL) return;

if(list[level]==NULL) list.push_back(root);

printLeftViewUtil(root->left,++level,list);//for left
printLeftViewUtil(root->right,++level,list);//for right

}

void leftViewPrint(Node* root){
vector<Node*>list;

// cout<<"in leftViewPrint function"<<endl;

printLeftViewUtil(root,0,list);

// cout<<"-------printing list-------"<<list[1]<<endl;

for(auto i=0; i < list.size(); i++)
cout << list[i]->data << ' ';

}

//top view of binary tree

class Pair{
    public:
    int hd;
    Node* node;

    Pair(int hd,Node* root){
        this->hd = hd;
        this->node = root;
    }
};

void topViewBinaryTree(Node* root){
queue<Pair>q; //pair me hme chahiye hd or node
map<int,int>map;
q.push(Pair(0,root));

while(!q.empty()){
  Pair cur = q.front();
  
  q.pop();

  if(!map.count(cur.hd)){
      map[cur.hd] = cur.node->data;
  }

  if(cur.node->left) q.push(Pair(cur.hd-1,cur.node->left));

  if(cur.node->right) q.push(Pair(cur.hd+1,cur.node->right));

}

cout<<"-------Printing map--------"<<endl;
 for (auto i : map)
        cout << i.first << "   " << i.second
             << endl;

};

//top view of binary tree

int main()
{
    Node *root = createTree();

    // inorder(root);
    // cout << "End of inorder" << endl;

    // preorder(root);
    // cout << "End of preorder" << endl;

    // postorder(root);
    // cout << "End of postorder" << endl;

    // cout << "Height of tree---->" << heightOfTree(root) << endl;

    // cout << "Size of tree---->" << size(root) << endl;

    // cout << "Maximum in elem in a binary tree " << maximun(root) << endl;

    // levelorder(root);

    // cout<<"Diameter of binary tree "<<diameter(root)<<endl;

    // cout << "Is balanced binary tree : " << isBalancedTree(root) << endl;

    // printLeftView(root);

    // leftViewPrint(root);

    topViewBinaryTree(root);

    return 0;
}
