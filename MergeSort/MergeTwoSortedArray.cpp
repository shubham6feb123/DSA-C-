#include<iostream>
using namespace std;
int *merge(int *ar1,int *ar2,int s1,int s2){
int* ar3 = new int [s1+s2];
int i=0;
int j=0;
int k=0;
while(i<s1&&j<s2){
    if(*(ar1+i)<*(ar2+j)){
      ar3[k]= *(ar1+i);
      i++;
      k++;
    }else{
         ar3[k] = *(ar2+j);
        j++;
        k++;
    }
}

if(s2>s1){
    while(j<s2){
         ar3[k] = *(ar2+j);
        j++;
        k++;
    }
}else{
     while(i<s1){
        ar3[k] = *(ar1+i);
        i++;
        k++;
    }
}

return ar3;
}
int main()
{
    int arr1[] = {2,5,12,18,20};
    int arr2[] = {7,9,11,15,25,28,30,35};
    int *ptr = merge(arr1,arr2,5,8);
    // int *a = new int[2];
    // a[0] = 12;
    // a[1] = 13;
    for(int i=0;i<13;i++){
        cout<<ptr[i]<<" ";
        // ++i;
    }
    return 0;
}

//size = l-r+1(l=r=index)