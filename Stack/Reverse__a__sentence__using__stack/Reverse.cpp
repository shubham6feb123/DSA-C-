#include<bits/stdc++.h>
using namespace std;

void reverse(string s){

//create a empty stack
stack <string> stc;

string temp = "";//temporary string

for(int i=0;i<s.length();i++){
    if(s[i] == ' '){
        stc.push(temp);
        temp = "";
    }

    else{
        temp = temp+s[i];

    }

}

//for the last word of string
stc.push(temp);

while(!stc.empty()){
    temp = stc.top();
    cout<<temp<<" ";
    stc.pop();
}

cout<<endl;

}


int main()
{

string s  = "I Love To Code";

reverse(s);

    return 0;
}