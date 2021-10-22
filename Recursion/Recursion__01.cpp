#include<iostream>
using namespace std;
void Counting(int n){
    if(n<=0){
        return ;
    }
   Counting(n-1);
      cout<<n<<" "<<endl;
   
}
int main()
{

Counting(5);

    return 0;
}