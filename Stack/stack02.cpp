#include<iostream>
using namespace std;
#define MAXSIZE 5
class Stack{
   int top;
   public:
    int stackArray[MAXSIZE];
   Stack(){
    top=-1;
   }
   int peek(){
       if(top<0){
         cout<<"Stack is empty"<<endl;
         return -1;
       }else{
           return stackArray[top];
       }
   };

   bool push(int value){
      if(top>=MAXSIZE-1){
          cout<<"Stack Overflow"<<endl;
        return false;
      }else{
          top++;
          stackArray[top] = value;
           cout<<stackArray[top]<<" is pushed to stack"<<endl;
          return true;
      }
   }

   bool pop(){
     if(top<0){
       cout<<"Stack Underflow"<<endl;
       return false;
     }else{
         cout<<stackArray[top]<<" is poped from stack"<<endl;
         top--;
       return true;
     }

   }

   bool isEmpty(){
       if(top>=0){
           cout<<"False"<<endl;
          return false;
       }
       cout<<"True"<<endl;
       return true;
   }

};
int main()
{
  Stack s1;
  s1.isEmpty();
  s1.pop();
  s1.peek();
  s1.push(1);
  cout<<s1.peek()<<endl;
  s1.isEmpty();
  s1.push(2);
  s1.push(3);
  s1.push(4);
  s1.push(5);
  s1.push(6);
  cout<<s1.peek()<<endl;
  s1.pop();
  cout<<s1.peek()<<endl;
  s1.pop();
  s1.pop();
  s1.pop();
  s1.pop();
  s1.pop();
  cout<<s1.peek()<<endl;
    return 0;
}