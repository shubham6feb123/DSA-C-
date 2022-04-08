#include <iostream>
#include <math.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(Node* &head,int val){
Node * node = new Node(val);
Node *temp = head;
if(head==NULL){
    head = node;
    head->next = head;
    return;
}

do{

temp = temp->next;

}while(temp->next!=head);

temp->next = node;
node->next = head;

}

void display(Node * &head){
Node* temp = head;
if(head==NULL){
    cout<<"Linked List is empty"<<endl;
    return ;
}
do
{
   cout<<temp->data<<endl;
   temp = temp->next; 
} while (temp!=head);

}

void deletion(Node* &head,int pos){
Node * temp = head;
int count  = 1;
if(head==NULL){
    cout<<"Linked List is empty"<<endl;
    return;
}
while(count != pos-1){
  temp = temp->next;
  count++;
}

temp->next = temp->next->next;

}

int main()
{
    Node *head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    deletion(head,2);
    display(head);
    cout<<"pow "<<pow(2,0);
    return 0;
}


