#include<iostream>
#include<string>
using namespace std;
void printPath(string p,int r,int c){
if(r==0||c==0){
    return;
}

if(r==1&&c==1){
    cout<<"["<<p<<"]"<<" ";
    return;
}

printPath(p+"R",r,c-1);//right
printPath(p+"D",r-1,c);//down
printPath(p+" DG ",r-1,c-1);//diagonal

}

int main()
{
    printPath("",3,3);
    return 0;
}