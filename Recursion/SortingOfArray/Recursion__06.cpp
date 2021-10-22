#include<iostream>
using namespace std;
bool chechSorting(int n,int arr[],int size){
if(n>=size){
return true;
} 

if(arr[n]<arr[n-1])
    return false;

 return chechSorting(n+1,arr,size);

}
int main()
{
    int array[] = {2,5,4,6,7,1};//{1,2,3,4,5,6};

    if(chechSorting(1,array,6)){
        cout<<"Array is sorted"<<endl;
    }else{
       cout<<"Array is not sorted"<<endl; 
    }
    
    return 0;
}