#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n = 5;
    int k;

    k = sqrt(2*n + 1/4)-1/2;
    cout<<"k "<<k<<endl;

      if(k*(k+1)/2 ==n || k*(k+1)/2<n){
       cout<<"rows "<<k;
   }else{
       cout<<"rows "<<k-1;
   }
 
    

    return 0;
}