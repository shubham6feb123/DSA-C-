#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>intersection;
    int arr1[] = {5,10,15,5};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {10,15,4,5};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

     for(int i=0;i<size1;i++){
        intersection.insert(arr1[i]);
    }
 
    for(int i=0;i<size2;i++){
        if(intersection.find(arr2[i])!=intersection.end()){
             intersection.insert(arr2[i]);
        }
    }


    for(auto it=intersection.begin();it!=intersection.end();it++){
        cout<<(*it)<<" ";
    }
    return 0;
}