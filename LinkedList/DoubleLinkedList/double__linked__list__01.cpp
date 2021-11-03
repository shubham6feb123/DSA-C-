#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val){
//    if(head->prev!=NULL){
//        return ;
//    }
    
    node* temp = head;
    node* n = new node(val);
    
    while(temp->prev!=NULL){
        temp=temp->prev;
    }

   //swapping
    temp->prev = n;
    n->next = temp;
   
}

void insertAtTail(node *&head, int val)
{
    node *temp = head;
    node *n = new node(val);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // swapping
    temp->next = n;
    n->prev = temp;
}

void displayRight(node *&head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        // cout << ptr<<" ptr.next "<<ptr->next << endl;
        cout << ptr->data<<endl;
        ptr = ptr->next;
    }
}


void displayLeft(node*&head)
{
    node *ptr = head;
    ptr = ptr->prev;
    // cout<<head->prev<<endl;
    while (ptr != NULL)
    {
        // cout << ptr<<" ptr.next "<<ptr->next << endl;
        cout << ptr->data<< endl;
        ptr = ptr->prev;
    }
}



int main()
{
    node *head = new node(1); //head is like middle point for doubly linked list
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head,-1);
    insertAtHead(head,-2);
    insertAtHead(head,-3);
    insertAtHead(head,-4);
    displayRight(head);
    displayLeft(head);

    return 0;
}