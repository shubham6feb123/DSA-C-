#include<iostream>
using namespace std;

// void swap(int* a,int* b){
//   int temp = *a;
//   *a = *b;
//   *b = temp;

// }
// void swap2(int* a,int* b){
// //   int temp = a;
// //   a = b;
// //   b = temp;
// cout<<*a<<" "<<*b<<endl;
// }


int main()
{

// int a = 4,b = 5;

// cout<<"Before swaping value of a is "<<a<<" and the value of b is "<<b<<endl;
// // swap(&a,&b);
// swap2(&a,&b);
// cout<<"After swaping value of a is "<<a<<" and the value of b is "<<b<<endl;

int *p1 = NULL;
cout<<"p1 pehle "<<p1<<endl;

p1=new int(10);
cout<<"p1 baadme "<<*p1<<endl;
    return 0;
}