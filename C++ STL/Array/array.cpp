#include<iostream>
#include<array>
using namespace std;
int main()
{
    //c++ stl array is only static not dynamic
    array<int,4>arr = {1,2,3,4};
    cout<<arr.at(2)<<endl;
   
    return 0;
}