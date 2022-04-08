#include <iostream>
#include <vector>
#include<iterator>
using namespace std;
int main()
{
    //vector is a dynamic array
    vector<int> arr;
    cout << "size---> " << arr.capacity() << endl;
    arr.push_back(1);
    cout << "capacity---> " << arr.capacity() << endl;
    arr.push_back(2);
    cout << "capacity---> " << arr.capacity() << endl;
    arr.push_back(3);
    cout << "capacity---> " << arr.capacity() << endl;
    arr.push_back(4);
    cout << "capacity---> " << arr.capacity() << endl;
    arr.push_back(5);
    cout << "capacity---> " << arr.capacity() << endl;

    cout<<"front "<<arr.front()<<endl;
    cout<<"back "<<arr.back()<<endl;

    cout<<"for each loop "<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"\nend of for each loop "<<endl;

    vector<int>v(5,1);

    for(int i:v){
      cout<<i<<" ";
    }

    cout<<"\n";

    vector<int>w(v);
   
     for(int i:w){
      cout<<i<<" ";
    }

    cout<<"\n";
    
   
    return 0;
}