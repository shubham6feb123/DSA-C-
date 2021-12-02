#include<iostream>
using namespace std;
void subsequence(string p,string up){
    if(up.length()==0){
        cout<<"["<<p<<"]"<<" ";
        return ;
    }
    string c = up.substr(0,1);

    subsequence(p+c,up.substr(1));
   subsequence(p,up.substr(1));

       
}
int main()
{

   subsequence("","abc");
    return 0;
}