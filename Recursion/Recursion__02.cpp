#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=0){
        return 1;
    }

    return n*factorial(n-1);
}
int main()
{

int num;
cout<<"Enter Number to Find Factorial :";
cin>>num;

cout<<"Factorial of "<<num<<" : "<<factorial(num)<<endl;


    return 0;
}