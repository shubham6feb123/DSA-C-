#include<iostream>
using namespace std;
int maze(int r,int c){
if(r==1||c==1){
  return 1;
}
int right = maze(r,c-1);//right
int down = maze(r-1,c);//down

return right+down;
}

int main()
{
  cout<<maze(2,2);
    
    return 0;
}