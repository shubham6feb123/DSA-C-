#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {8,5,7,3,1,9,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = 0;
    int temp;
cout<<"Before Sorting"<<endl;
print(arr,size);
cout<<endl;   

for(i=0;i<size;i++){
for(j=0;j<size-i-1;j++){
    if(arr[j]>arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }
}
}



 cout<<"After Sorting"<<endl; 
 print(arr,size);
    return 0;
}