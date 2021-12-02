#include<iostream>
using namespace std;
// int fun(int * arr){
// cout<<*(arr+3);
// return 0;
// }

int fun2(int arr[]){
        for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
cout<<endl;
   for(int i=0;i<5;i++){
      arr[i] = i+11;
   }


// fun2(arr);
  
   return 0;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    // int *b = arr;
    // fun(b);

    fun2(arr);
     for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}