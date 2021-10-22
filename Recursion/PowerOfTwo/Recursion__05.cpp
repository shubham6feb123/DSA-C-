#include<iostream>
using namespace std;

//approach 1
int expo(int n){//we are doing only of base 2 
                //base 2 is pre defined
if(n==0){
    return 1;
}
return 2*expo(n-1);
}
int main()
{
    cout<<"Answer : "<<expo(5);
    return 0;
}