#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(s.begin());

     for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"is Present--->"<<s.count(0)<<endl;
    return 0;
}