#include<iostream>
using namespace std;

int main(){
int arr[] = {5,3,4,1,2};
int size  = sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<size-1;i++){
    int temp;
    for(int j=i+1;j<=i+1;j++){
        if(arr[i]>arr[j]){
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
        }
    }
}

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}