#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;//contain address of new class
node(int val){
    data = val;
    next = NULL;
    };
};
void insertAtTail(node* &head,int val){
 node* n = new node(val);
if(head==NULL){
  head = n;
  return;
}else{


node* &ptr = head;
while(ptr->next!=NULL){
ptr = ptr->next;
}

ptr->next = n;
}
};

void display(node* &head){
    node* &ptr = head;
    while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr = ptr->next;
    }

}
int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    display(head);

    return 0;
}