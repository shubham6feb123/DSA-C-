#include<iostream>
using namespace std;

int IntegralPart(int sqr_root){
for(int i=1;i<sqr_root;i++){
if(i*i==sqr_root){
  return i;
  break;
}
else if(i*i>sqr_root){
    return i-1;
    break;
}
}
return 0;
};

float FractionalPart(int int_part,float ans,int num){
    float N = ans;
for(int i=0;i<num;i=i++){
    if(N*N>num){ 
    return N-0.1;
    break;
    }
    N = N + 0.1;
}  
return 0;   

};

int main(){
    int num = 2147395599;
    int integer;
    float final_ans;

  integer = IntegralPart(num);
  
 if(integer*integer!=num){    
  cout<<"Integral part : "<<integer<<endl;
     float ans = float((integer*10 + 1)/10.0);
     final_ans = FractionalPart(integer,ans,num);

  cout<<"Square Root of "<<num<<" : "<<int(final_ans)<<endl;
  }else{
      cout<<"Square Root of "<<(num)<<" : "<<int(integer*1)<<endl;
  }

    return 0;
}