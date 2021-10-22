#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter row no. to find sum : ";
    cin>>row;
  int ans = 1;
    for(int i=0;i<row;i++){
      if(row>1){
          ans = ans*2;
      }
    }

    cout<<"Sum of row "<<row<<" : "<<ans<<endl;
    return 0;
}