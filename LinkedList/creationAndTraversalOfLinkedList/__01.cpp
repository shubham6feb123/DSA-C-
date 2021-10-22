#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

void printList(node* &n){ //node *n = &head;
while (n!=NULL)
{
    /* code */
    cout<<n->data<<"--> ";
      n = n->next; // 1.head = head.next = &second
                   // 2.second = second.next = &third  
                   // 3.third = third.next = NULL
}
cout<<"NULL"<<endl;

}
int main()
{
    node* head = NULL;
     node* second = NULL;
      node* third = NULL;

      head = new node();
      second = new node();
      third = new node();

head->data = 1;
head->next = second;

second->data = 2;
second->next = third;

third->data = 3;
third->next = NULL;
       

    //   cout<<head->next<<endl;
    //   cout<<second<<endl;

    //   cout<<second->next<<endl;
    //   cout<<third<<endl;

    //   cout<<third->next<<endl;
    printList(head);

    return 0;
}