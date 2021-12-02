#include<iostream>
#include<string>
using namespace std;
void permuteSub(string p,string up){
    if(up.length()==0){
         cout<<"["<<p<<"]"<<" ";
        return ;
    }

    string ch = up.substr(0,1);

    permuteSub(p+ch,up.substr(1));

    if(p.length()!=0){
    permuteSub(ch+p,up.substr(1));
  } 

  if(p.length()==2){
      string ch1 = p.substr(0,1);
      string ch2 = p.substr(1,1);

      permuteSub(ch1+ch+ch2,up.substr(1));
  }
}
int main()
{
    permuteSub("","abc");
    return 0;
}