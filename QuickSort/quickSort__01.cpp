#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int  partioning(int arr[],int lo,int hi,int pivot){
    int i=lo;
    int j=lo;
while(i<=hi){//size =8
  if(arr[i]>pivot){
      i++;
  }
  else{
      swap(arr,i,j);
      i++;
      j++;
  }

}
return (j-1);

}

void quickSort(int arr[],int lo,int hi){
    if(lo>=hi){
        return ;
    }
int pivot = arr[hi];
int pi = partioning(arr,lo,hi,pivot);
 quickSort(arr,lo,pi-1);
 quickSort(arr,pi+1,hi);

}

int main()
{
    int arr[] = {8,5,1,3,7,2,9,6};
    // partioning(arr,0,7,6);
    quickSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}