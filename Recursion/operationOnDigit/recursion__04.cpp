#include<iostream>
#include<math.h>
using namespace std;
int pallindromOfNumber(int n){
  int last = n%10;
int rem = n/10;
int digit = int(log10(n));
if(n<=9){
    return n;
}

 return last*int(pow(10,digit)) + pallindromOfNumber(rem);  
}
int main()
{
    int n ;
    cout<<"Enter number : ";
    cin>>n;
    int pallin = pallindromOfNumber(n);
    if(pallin==n){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}