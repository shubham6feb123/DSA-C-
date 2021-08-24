#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,3,4,45,67,89,90,100,1,2,5,6,7,8,9,200,51,78,95,400,450,500,250};//{4,5,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
            int maxIndex = 0;
                int temp;

                //for finding max index
    for(int j = maxIndex+1;j<size-i;j++){
        if(arr[maxIndex]<arr[j]){
            maxIndex = j;
        }
    }
   temp = arr[maxIndex];
   arr[maxIndex] = arr[size-i-1];
   arr[size-i-1] = temp;
   
}

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}