#include<iostream>
#include<stack>
using namespace std;
void reverseStack(stack<int> &stack) {
   if(stack.empty()){
       return ;
   }
    int n = stack.top(); //1 2
    cout<<stack.top()<<endl;
    stack.pop();
    reverseStack(stack);//2 empty
    stack.push(n);
    
}
int main()
{
    stack<int> st;
    st.push(2);
    st.push(1);
   reverseStack(st);
   while(!st.empty()){
      cout<<st.top()<<endl;
      st.pop();
   }
    return 0;
}