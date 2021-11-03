#include<iostream>
#include<math.h>
using namespace std;

int sumOfDigit(int n){
    int last = n%10;
    int remain = floor(n/10);
    if(n==0){
        return 0;
    }
    
    return last+sumOfDigit(remain);
}

int main()
{
    cout<<sumOfDigit(67565656);
    return 0;
}