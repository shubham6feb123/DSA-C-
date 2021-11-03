#include<iostream>
using namespace std;
void numberOfSteps(int n,int *counter){
if(n%2==0){
    n = n/2;
    ++(*counter);
}
if(n%2!=0){
    n=n-1;
    ++(*counter);
}
if(n==0){
    return ;
}
return numberOfSteps(n,counter);
}
int main()
{
    int count = 0;
    numberOfSteps(500,&count);
    cout<<"steps : "<<count;
    return 0;
}