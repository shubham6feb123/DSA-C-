#include<iostream>
using namespace std;

void swap(int* a,int* b){
  int temp = *a;
  *a = *b;
  *b = temp;

}
void swap2(int* a,int* b){
//   int temp = a;
//   a = b;
//   b = temp;
cout<<*a<<" "<<*b<<endl;
}


int main()
{

int a = 4,b = 5;

cout<<"Before swaping value of a is "<<a<<" and the value of b is "<<b<<endl;
// swap(&a,&b);
swap2(&a,&b);
cout<<"After swaping value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}