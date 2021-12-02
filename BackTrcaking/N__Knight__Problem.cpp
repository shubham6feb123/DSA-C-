#include<iostream>
using namespace std;
bool isSafe(int board[4][4],int row,int col){
bool p1=true,p2=true,p3=true,p4=true;
if(board[row-1][col-2]==1) p1=false;
if(board[row-2][col-1]==1) p2=false;
if(board[row-1][col+2]==1) p3=false;
if(board[row-2][col+1]==1) p4=false;

if(p1&&p2&&p3&&p4){
    return true;
}

return false;
}
void Knight(int board[4][4],int row,int col,int knights){
if(knights==0){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    return;
}


if(row==3&&col==4){
    return ;
}

    if(col==4){
        Knight(board,row+1,0,knights);
        return;
    }

    if(isSafe(board,row,col)){
      board[row][col] = true;
      Knight(board,row,col+1,knights-1);
      board[row][col] = false;
    }

    Knight(board,row,col+1,knights);

}
int main()
{
    int board[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}};
    Knight(board,1,1,4);
    return 0;
}