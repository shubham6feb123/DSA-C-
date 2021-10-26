#include<iostream>
using namespace std;
bool numbersPrime(int num){
if(num<=1){
      return false;
  }
    for(int i=2;i<num;i++){
      if(num%i==0){
          //not prime
          return false;
      }
    }
    //prime
    return true;
     
}
int main()
{
    int num = 625;
    int count = 0;
    for(int i=2;i<num;i++){
      if(numbersPrime(i)){
          count++;
      }
    }

    cout<<"How many numbers less than "<<num<<" are prime numbers : "<<count<<endl;

    return 0;
}