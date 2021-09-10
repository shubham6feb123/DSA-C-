#include<iostream>
using namespace std;
// Input: nums = [2,7,11,15], target = 9

void Solution(int target,int arr[],int size){
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
       if(arr[i]+arr[j] == target){
          cout<<"Indexes are "<<i<<" "<<j<<endl;
       }
    }
}

}

int main(){
    int nums[] = {3,2,4};
    int target = 6;
    int size = sizeof(nums)/sizeof(nums[0]);

Solution(target,nums,size);

    return 0;
}