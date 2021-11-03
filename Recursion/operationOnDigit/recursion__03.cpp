#include<iostream>
#include<math.h>
using namespace std;
int reverseNumber(int n){
int last = n%10;
int rem = n/10;
int digit = int(log10(n));
if(n<=9){
    return n;
}

 return last*int(pow(10,digit)) + reverseNumber(rem);
}
int main()
{
    cout<<reverseNumber(12345)<<endl;
      cout<<reverseNumber(576656)<<endl;
      cout<<reverseNumber(76658)<<endl;
      cout<<reverseNumber(111111)<<endl;
     
    return 0;
}
