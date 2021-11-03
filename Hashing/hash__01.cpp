#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s1;
    s1.insert(5);
    s1.insert(10);
    cout<<s1.empty()<<endl;;
    if(s1.find(5)==s1.end()){
        cout<<"not found"<<endl;
    }else{
        cout<<"found"<<endl;
        cout<<(*(s1.begin()))<<endl;
    }

   for(auto it = s1.begin();it!=s1.end();it++){
       cout<<(*it)<<" ";
   }
    return 0;
}