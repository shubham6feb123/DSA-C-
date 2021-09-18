#include<iostream>
using namespace std;
int main()
{
    int arr[] = {6,7,5,4,3,2,1,9,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<size){
        int ci = arr[i]-1;
        if(arr[i]!=arr[ci]){
            ///swap
            int temp = arr[ci];
            arr[ci] = arr[i];
            arr[i] = temp;
        }else{
            i++;
        }
    }

    //printing
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}