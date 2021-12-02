#include<iostream>
using namespace std;
int BinarySearch(int* arr,int target,int lo,int hi){

if(lo>hi){
    return -1;
}

int m = lo+(hi-lo)/2;
if(*(arr+m)==target){
    return m;
}

if(*(arr+m)<target){
lo = m+1;
}

if(*(arr+m)>target){
    hi = m-1;
}



return BinarySearch(arr,target,lo,hi);

}

int RotatedBinarySearch(int* arr,int target,int lo,int hi){

if(lo>hi){
    return -1;
}

int m = lo+(hi-lo)/2;
if(*(arr+m)==target){
    return m;
}

if(*(arr+m)<target){
hi = m-1;
}

if(*(arr+m)>target){
    lo = m+1;
}



return RotatedBinarySearch(arr,target,lo,hi);
}

int main()
{
    int array[] =  {1,2,3,4,5,6,7};// {} ;
    cout<<"Binary Search : "<<BinarySearch(array,6,0,6)<<endl;

    int array2[] = {7,6,5,4,3,2,1};
    cout<<"Rotated Binary Search : "<<RotatedBinarySearch(array2,6,0,6);

    return 0;
}