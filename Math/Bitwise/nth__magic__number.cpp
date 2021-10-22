#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int ans = 0;
    int base = 1;

    while(n>0){
      int last = n&1;
      n = n>>1;
      base = base*5;      
      if(last==1){
         ans = ans+base;
      }
    }

    cout<<"ans"<<" : "<<ans<<endl;
    return 0;
}