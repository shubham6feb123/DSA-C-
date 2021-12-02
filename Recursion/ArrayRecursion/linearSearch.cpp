#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int*arr,int size,int target,int i){
if(i==size){
    return -1;
}
if(*(arr+i)==target){
    return i;
}

return linearSearch(arr,size,target,++i);
}

//for multiple occurrences we have to initialise a list 
vector<int>list;

void multipleOccurrenceLinearSearch(int*arr,int size,int target,int i){
if(i==size){
     return;
}
if(*(arr+i)==target){
   list.push_back(i);
}

return multipleOccurrenceLinearSearch(arr,size,target,++i);
}

int main()
{
    int array[] = {4,5,8,4,3,0};
     cout<<linearSearch(array,6,4,0)<<endl;;
    multipleOccurrenceLinearSearch(array,6,100,0);
    cout<<list[0]<<" "<<list[1];

    return 0;
}