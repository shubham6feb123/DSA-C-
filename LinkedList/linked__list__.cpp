#include<iostream>
using namespace std; 
class Node{
    public:
    int data;
    Node *next;
};




int main()
{
// Node Head;
// Node Second;
// Node Third;

// Head.data = 1;
// Head.next = &Second;

// Second.data = 2;
// Second.next = &Third;

// Third.data = 3;
// Third.next = NULL;


// cout<<"Address of Head Node "<<&Head<<endl;
// cout<<"Address of Second Node "<<&Second<<endl;
// cout<<"Address of Third Node "<<&Third<<endl;


// cout<<"Address of Second Node "<<Head.next<<endl;
// cout<<"Address of Third Node "<<Second.next<<endl;
// cout<<"Address of Fourth Node "<<Third.next<<endl;

Node *p;

p = new Node();

if(p==NULL){
    cout<<"Memort not allocated"<<endl;
    exit(0);
}

p->data = 10;
p->next = NULL;

cout<<"data part is "<<p->data<<endl;

delete p;

cout<<"data part is "<<p->data<<endl;

    return 0;
}