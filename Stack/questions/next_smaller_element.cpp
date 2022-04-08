#include<iostream>
#include<vector>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int>v1;
    int ar[arr.size()];
    for(int i=0;i<arr.size();i++){
        int c=0;
        for(int j=i+1;j<arr.size();i++){
            if(arr[i]>arr[j]){
               ar[i] = ++c; 
            }else{
                ar[i] = -1;
            }
        }
        c=0;
    }
    
    ar[arr.size()-1] = -1;
    
     for(int i=0;i<arr.size();i++){
       cout<<ar[i]<<" ";
    }

    for(int i=0;i<arr.size();i++){
        v1.push_back(ar[i]);
    }
    
    return v1;
};

int main()
{
    vector<int>arr;
    arr.push_back(2);
     arr.push_back(3);
      arr.push_back(1);
    cout<<"before arrangement : ";
       for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    cout<<endl;

   nextSmallerElement(arr,arr.size());   

   cout<<"after arrangement : "<<endl;
       for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";  

    return 0;
}