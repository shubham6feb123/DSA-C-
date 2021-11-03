#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    int arr[] = {3,4,5};//{5,10,5,4,5,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        s.insert(arr[i]);
    }

    cout<<"Distinct Elements : "<<s.size();
    return 0;
}