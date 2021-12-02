#include<iostream>
using namespace std;
bool arraySortedOrNot(int*n,int i,int j,int size){
 if(j==size-1){
    return true;
}

if(*(n+i)>*(n+j)){
return false;
}

 return arraySortedOrNot(n,++i,++j,size);
}
int main()
{
    int array[6] = {7,3,5,6,7,8};

    cout<<arraySortedOrNot(array,0,1,6);
    return 0;
}