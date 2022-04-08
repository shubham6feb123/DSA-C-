#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    string st = "hello";
    stack<char>chst;

    for(int i=0;i<st.length();i++){
      chst.push(st[i]);
    }

 

    cout<<"Before reversing an string "<<st<<endl;

    string revst;
    
   for(int i=0;i<st.length();i++){
       revst += chst.top();
       chst.pop();
   } 
    

   cout<<"After reversing an string "<<revst<<endl;


   
    return 0;
}