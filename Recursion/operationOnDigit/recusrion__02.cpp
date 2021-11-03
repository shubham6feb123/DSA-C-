#include<iostream>
#include<math.h>
using namespace std;
int productOfDigit(int n){
int last = n%10;
    int remain = floor(n/10);
    if(n==0){
        return 1;
    }
    
    return last*productOfDigit(remain);
}
int main()
{
      cout<<productOfDigit(4528);
    return 0;
}