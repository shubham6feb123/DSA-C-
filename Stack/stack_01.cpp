#include<iostream>
using namespace std;
# define MAX 2     //size of array
class Stack{
int top;
public:
int array[MAX];//our stack which is a array

Stack(){  //constructor when stack object is initialized top will automatically receive its position
    top = -1;
}

bool push(int x){
    if(top >= MAX-1){
        cout<<"stack overflow"<<endl;
        return false;
    }
    else{
         top = top+1;
         array[top] = x;
        cout<<x<<" pushed into stack"<<endl;
        return true;
    }

}

  int pop(){
        if(top<0){
            cout<<"stack underflow"<<endl;
        }
         int x = array[top];
         top = top-1;
         return x; 
      
    }

    int peak(){
        if(top<0){
            cout<<"stack is empty"<<endl;
        }
          int x = array[top];
          return x;
        
        //  return x;
    }

    bool isEmpty(){
      if(top<0){
          return true;  //1
      }
      return false;  //0

    }



};



int main()
{
    class Stack s;
   
   s.push(1);
   s.push(2);
   s.push(3);
   
   cout<<"peek "<<s.peak()<<endl;

   cout<<"isEmpty "<<s.isEmpty()<<endl;

   s.pop();
   s.pop();
   s.pop();

    cout<<"isEmpty "<<s.isEmpty()<<endl;

    return 0;
}