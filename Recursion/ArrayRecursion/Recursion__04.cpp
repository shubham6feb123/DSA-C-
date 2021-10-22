#include<iostream>
#include<string>
using namespace std;
void NumberintoString(int n,string str[]){
    if(n<=0){
        return ;
    }
NumberintoString(n/10,str);
cout<<str[n%10]<<" ";
}
int main()
{
  string array[11] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"}  ;

cout<<"Answer : ";
NumberintoString(432,array);
    return 0;
}