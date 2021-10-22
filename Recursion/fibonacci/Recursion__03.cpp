#include<iostream>
using namespace std;
long long int fib(long long int n){
   if(n==0||n==1){
       return n;
   } 

   return fib(n-1)+fib(n-2);
}
int main()
{
 int num = 100;
// cout<<"Enter Number to Find fibonacci no. :";
// cin>>num;

cout<<num<<" fibonacci no. : "<<fib(num)<<endl;
    return 0;
}