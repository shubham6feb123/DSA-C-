#include<iostream>
#include<string>
using namespace std;
string skipString(string st,string x){
if(st.length()==0){
    return "";
}

if(st.substr(0,5)==x){
   return skipString(st.substr(5),x);
}

return st[0]+skipString(st.substr(1),x);
}

string skipAppNotApple(string st,string x){
if(st.length()==0){
    return "";
}

if(st.substr(0,3)==x && st.substr(0,5)!="apple"){
   return skipString(st.substr(3),x);
}

return st[0]+skipString(st.substr(1),x);
}
int main()
{
    string st = "applissomethingwhichwedontknowappl";

   string x = "app";

   string ans  = skipAppNotApple(st,x);//skipString(st,x);
   cout<<ans;

    return 0;
}