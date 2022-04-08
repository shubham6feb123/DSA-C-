#include <iostream>
#define N 4
using namespace std;
bool isSafe(int board[N][N],int row,int col){
    int r = row;
    int c = 0;
    //checking row
    while(c<N){
        if(board[r][c]==1){
            // cout<<"row----> ";
            return false;
        }

        c++;
    }

    //checking col
    r = 0;
    c = col;
    while(r<N){
        if(board[r][c]==1){
            // cout<<"col----> ";
            return false;
        }

        r++;
    }

    //checking right up diag
    r=row;
     c=col;
     while(r>0||c<N){
       if(board[r][c]==1){
        //    cout<<"rud----> ";
           return false;
       }
       --r;
       ++c;
     }

     //checking left up diag
     r=row;
     c=col;
     while(r>0||c>0){
       if(board[r][c]==1){
        //    cout<<"lud----> ";
           return false;
       }
       --r;
       --c;
     }

   return true;
}

bool NQueen(int board[N][N],int row,int col){
if(row==N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return true;
}


for(int col=0;col<N;col++){
    if(isSafe(board,row,col)){
        board[row][col] = 1;
        if(NQueen(board,row+1,0)){
            return true;
        }
        else{
            board[row][col] = 0;//backtracking line of code
        }
    }
}

return false;
}

int main()
{
    int array[N][N] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};

    NQueen(array,0,0);
    // cout<<"------------>"<<endl;
    //   for(int i=0;i<N;i++){
    //     for(int j=0;j<N;j++){
    //         cout<<array[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
                    //    cout<<isSafe(array,2,1);
    return 0;
}



