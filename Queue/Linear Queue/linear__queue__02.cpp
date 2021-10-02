#include<iostream>
using namespace std;
#define SIZE 7
class Queue{
    int front;
    int rear;
    public:
    int arr[SIZE];
    Queue(){
        rear = -1;
        front = 0;
    }
      
      bool EnQueue(int x){
        if(rear>SIZE-1){
            cout<<"Queue OverFlow"<<endl;
            return false;
        }else{
            arr[++rear] = x;
            return true;
        }
      }

      bool DeQueue(){
          if(front==rear+1){
              cout<<"Queue UnderFlow"<<endl;
              return false;
          }else{
              for(int i=0;i<rear;i++){
                  arr[i] = arr[i+1];
              }
              rear--;
              return true;
          }
      }

      int frontElement(){
         if(rear<0){
             return -1;
         }else{
             return arr[0];
         }
      }

      int rearElement(){
          if(rear<0){
              return -1;
          }else{
              return arr[rear];
          }
      }

};
int main()
{
    return 0;
}