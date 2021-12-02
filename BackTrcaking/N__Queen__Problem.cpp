#include <iostream>
using namespace std;
bool isSafe(int board[4][4], int row, int col)
{
    bool rowc = true, colc = true, rdDiag = true, ruDiag = true, ldDiag = true, luDiag = true;
    //row checking
    for (int col = 0; col < 4; col++)
    {
        if (board[row][col] == true)
        {
            rowc = false;
            break;
        }
    }

    //column checking
    for (int row = 0; row < 4; row++)
    {
        if (board[row][col] == true)
        {
            colc = false;
            break;
        }
    }

    //rdDiag checking
    int rows = row;
    int cols = col;
    while (rows < 4 && cols < 4)
    {
        if (board[rows][cols] == true)
        {
            rdDiag = false;
        }
        rows++;
        cols++;
    }

    //ruDiag
    rows = row;
    cols = col;
    while (rows >= 0 && cols < 4)
    {
        if (board[rows][cols] == true)
        {
            ruDiag = false;
            break;
        }
        rows--;
        cols++;
    }

    //ldDiag
    rows = row;
    cols = col;
    while (rows < 4 && cols <= 0)
    {
        if (board[rows][cols] == true)
        {
            ldDiag = false;
            break;
        }

        rows++;
        cols--;
    }

    //luDiag
    rows = row;
    cols = col;
    while (rows >= 0 && cols <= 0)
    {
        if (board[rows][cols] == true)
        {
            luDiag = false;
        }
        rows--;
        cols--;
    }

    if (rowc == true && colc == true && rdDiag == true && ruDiag == true && ldDiag == true && luDiag == true)
    {
        return true;
    }

    return false;
}
bool N_Queen(int board[4][4], int row, int rowLength = 4)
{
    if (row == rowLength){
         for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<board[i][j]<<" ";
        }
          cout<<endl;
    }
        return true;
        }
    for (int col = 0; col < 4; col++)
    {
        if (isSafe(board, row, col))
        {
            board[row][col] = true;            
                // return true;
            
            if (N_Queen(board, row+1)){
                return true;
            }

            board[row][col] = false;
        }
    }
    return false;
}
int main()
{
    int board[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}};

    cout << N_Queen(board, 0)<<endl;

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<board[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}