#include <iostream>
using namespace std;
//approach 2
//fast exponentiation
int expo(int n)
{
    if (n == 0)
    {
        return 1;
    }

int chota__answer = expo(n/2);
 //odd case
 if(n%2!=0){
return 2*chota__answer*chota__answer;
 }else{
     //even case
     return chota__answer*chota__answer;
 }
}
int main()
{
    cout << "Answer : " << expo(5);
    return 0;
}