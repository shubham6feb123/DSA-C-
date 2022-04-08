#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;

   m[1] = "love";
   m[2] = "babbar";
   m[13] = "pelo";
   m.insert({5,"ko"});

   for(auto i:m){
     cout<<i.first<<" ";
   }cout<<endl;

   for(auto i:m){
     cout<<i.second<<" ";
   }cout<<endl;
    return 0;
}