#include <iostream>
using namespace std;
bool PrimeOrNot(int num)
{
  
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
    int num = 2;
    cout << "Enter number to check whether it is prime or not : ";
    cin >> num;

    if(PrimeOrNot(num)){
      cout<<num<<" is a prime number\n";
    }else{
      cout<<num<<" is not a prime number\n";
    }

    return 0;
}