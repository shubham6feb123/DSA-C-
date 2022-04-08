#include <iostream>
#include<math.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    // else
    node *ptr = head;

    // cout<<"head-->"<<head<<endl;
    // cout<<"ptr-->"<<ptr<<endl;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = n;
}

// inserting node between first and last node
void insertBtwFirstAndLastPos(node *&head, int pos, int val)
{
    node *n = new node(val);
    node *ptr = head;
    for (int i = 1; i < pos; i++)
    {
        if (i == pos - 1)
        {
            node *ptr2 = ptr->next;
            ptr->next = n;
            n->next = ptr2;
        }
        else
        {
            ptr = ptr->next;
        }
    }
}

// deleting node between first and last node
void delBtwFirstAndLastPos(node *&head, int pos)
{
    node *ptr = head;
    node *ptr2 = NULL;
    for (int i = 1; i < pos; i++)
    {
        if (i == pos - 1)
        {
            ptr2 = ptr->next;
            ptr2 = ptr2->next;
            ptr->next = ptr2;
            // cout<<"inside deletion"<<endl;
        }
        else
        {
            ptr = ptr->next;
        }
    }
}

// getting length of linkedList

int lengthOfLinkedList(node *&head)
{
    int length = 0;
    node *ptr = head;
    if (head == NULL)
    {
        return 0;
    }

    while (ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    return length;
}

// updating a given node data field
void UpdateDataInGivenNode(node *&head, int pos, int val)
{
    node *ptr = head;
    for (int i = 1; i <= pos; i++)
    {
        if (i == pos)
        {
            ptr->data = val;
        }
        else
        {
            ptr = ptr->next;
        }
    }
}

// geting a given node
node *getNthNode(node *&head, int pos)
{
    node *ptr = head;
    for (int i = 1; i <= pos; i++)
    {
        if (i == pos)
        {
            return ptr;
        }
        else
        {
            ptr = ptr->next;
        }
    }
}

// getting middle of given LinkedList
node *getMiddleOfLinkedList(node* &head)
{
    node *ptr = head;
    node *ptr2 = head;
    if (ptr!= NULL)
    {
       while(ptr2->next != NULL&&ptr2!=NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next->next;
    }
  
    return ptr;
    }

 
}

//checking how many duplicate data is present in a linked list
int duplicateData(node* &head,int val){
node* ptr = head;
int count = 0;
while(ptr!=NULL){
if(ptr->data==val){
    count++;
    // ptr = ptr->next;
}
ptr = ptr->next;
}

return count-1;
}

void display(node *&head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    node *head = NULL;
    // cout<<head<<endl;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertBtwFirstAndLastPos(head, 3, 5);
    insertBtwFirstAndLastPos(head, 5, 10);
    delBtwFirstAndLastPos(head, 3);
    delBtwFirstAndLastPos(head, 3);
    delBtwFirstAndLastPos(head, 3);
    insertAtTail(head, 15);
    delBtwFirstAndLastPos(head, 3);
    insertBtwFirstAndLastPos(head, 3, 3);
    cout << "length : " << lengthOfLinkedList(head) << endl;
    UpdateDataInGivenNode(head, 4, 4);
    node *getNode = getNthNode(head, 3);
    cout << "Nth Node Data : " << getNode->data << "\nData of next to Nth node : " << getNode->next->data << endl;
    insertAtTail(head,5);
    insertAtTail(head,6); 
    node* middleElemOfLL = getMiddleOfLinkedList(head);
    cout << "Middle of linked list : " << middleElemOfLL->data << endl;
    // insertAtTail(head,5);
     display(head);
    // cout<<"duplicate data "<<duplicateData(head,5)<<endl;

    return 0;
}

