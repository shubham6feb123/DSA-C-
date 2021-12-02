#include<iostream>
#include<string>
using namespace std;
void mazeWithObstacles(string p,int r,int c){
if(r==0||c==0){
    return;
}

if(r==2&&c==2){
    cout<<"river-->"<<" ( "<<r<<","<<c<<","<<p<<" )"<<endl;
    return ;
}

if(r==1&&c==1){
    cout<<"["<<p<<"]"<<endl;
    return;
}

mazeWithObstacles(p+" R ",r,c-1);//right
mazeWithObstacles(p+" D ",r-1,c);//down
mazeWithObstacles(p+" DG ",r-1,c-1);//diagonal

}
int main()
{
    mazeWithObstacles("",3,3);
    return 0;
}