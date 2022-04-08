#include<iostream>
using namespace std;
int fibonacci(int n){
 if(n==0||n==1){
     return n;
 }
 return fibonacci(n-1)+fibonacci(n-2);
};

int sumAllInteger(int n){
if(n==1||n==0)return n;
return (n+sumAllInteger(n-1));
}

void printNum(int n){
if(n<1)return;
printNum(n-1);
cout<<"Number "<<n;
cout<<endl;
};

int factorial(int n){
if(n==0||n==1)return n;
return n*factorial(n-1);
}

int power(int x,int n){
if(n==0) return 1;

return x*power(x,n-1);
}
int main()
{

cout<<power(2,10);
    return 0;
}