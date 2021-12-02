#include <iostream>
using namespace std;
void rateInAMaze(string path, int maze[4][4], int row, int col)
{
    if (row > 3 || col > 3 || col < 0 || row < 0)
    {
        return;
    }

    if (maze[row][col] == 0)
    {
        return;
    }

    if (row == 3 && col == 3)
    {
        cout << path << endl;
        return;
    }

    maze[row][col] = 0;

    rateInAMaze(path + "U", maze, row - 1, col); // up
    rateInAMaze(path + "D", maze, row + 1, col); // down
    rateInAMaze(path + "R", maze, row, col + 1); // right
    rateInAMaze(path + "L", maze, row, col - 1); // left
    maze[row][col] = 1;
    return;
}
int main()
{
    int array[4][4] = {{1, 0, 0, 0},
                       {1, 1, 0, 1},
                       {1, 1, 0, 0},
                       {0, 1, 1, 1}};

    rateInAMaze("", array, 1, 1);
    return 0;
}