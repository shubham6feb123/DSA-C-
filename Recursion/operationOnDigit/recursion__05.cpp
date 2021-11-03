#include<iostream>
#include<math.h>
using namespace std;
int numberOfZeroes(int n,int *counter){

if(n%10==0){
    ++(*counter);
}

if(n<=9){
    return *counter;
}


 return numberOfZeroes(n/10,counter);
}

int main()
{
    int count = 0;
  cout<<numberOfZeroes(300005,&count);


    // int *num = &count;
    // int* num1 = num;
    //  ++(*num1);
    // cout<<*num<<endl;
   
    // cout<<*num1;
 
    return 0;
}