#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
void letterCombinationOfAPhoneNum(string p,string up,unordered_map<int,string> &list){
 if(up.length()==0){
  cout<<p<<" ";
  return ;
 }

  int digit = stoi(up.substr(0,1));

  for(int i=0;i<list[digit].length();i++){

    letterCombinationOfAPhoneNum(p+list[digit].substr(i,1),up.substr(1),list);
  
}
}
int main()
{
unordered_map<int,string>map;
map[2] = "abc";
map[3] = "def";
map[4] = "ghi";
map[5] = "jkl";
map[6] = "mno";
map[7] = "pqrs";
map[8] = "tuv";
map[9] = "wxyz";


letterCombinationOfAPhoneNum("","23",map);

vector<string>vt;

    
    return 0;
}