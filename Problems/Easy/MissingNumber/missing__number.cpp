#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,0,2,1};//{0,2,3,4,6,7,9,10};//
    int n = 4;
    int i=0;
    while(i<n){
        if(arr[i]==n){
            //ignore
            i++;
        }else if(arr[i]!=i){
              //swap
              int temp = arr[i];
              arr[i] = arr[temp];
              arr[temp] = temp;
        }else if(arr[i]==i){
            i++;
        }
    };

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    };

    for(int i=0;i<=n-1;i++){
        if(arr[i]!=i){
       cout<<"\nMissing Number is "<<i<<endl;      
        }
    };
    return 0;
}