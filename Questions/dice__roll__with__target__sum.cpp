#include<iostream>
#include<vector>
#include<string>
using namespace std;
void dice(string p,int t){
if(t==0){
  int ans = 0;
  for(int i=0;i<p.length();i++){
      ans = ans + stoi(p.substr(0,1));
  }

  cout<<ans<<endl;
    return ;
}
 for(int i=1;i<=7&&i<=t;i++){
     dice(p+to_string(i),--t);
 }

}

int main()
{
    // vector<long>arrayList;
    dice("",500);

    return 0;
}