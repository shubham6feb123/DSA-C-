#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,10000,8,9,5,3,0,1,100,7,101,1000};
    int maxIndex = 0;
    int size = sizeof(arr)/sizeof(arr[0]);

        for(int j = maxIndex+1;j<size;j++){
            if(arr[maxIndex]<arr[j]){
                maxIndex = j;
            }
        }

        cout<<"max Index : "<<maxIndex<<endl;
        cout<<"Element corresponding to max Index : "<<arr[maxIndex]<<endl;


    return 0;
}