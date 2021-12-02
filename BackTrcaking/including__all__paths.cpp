#include <iostream>
using namespace std;
void allPaths(bool arr[3][3], int r, int c, string p)
{
    if (r == 0 || c == 0 || c > 3 || r > 3)
    {
        return;
    }

    if (arr[r][c] == false)
    {
        return;
    }

    if (r == 1 && c == 1)
    {
        cout << "[" << p << "]" << endl;
        return;
    }

    arr[r][c] = false;

    allPaths(arr, r, c - 1, p + "R"); // right
    allPaths(arr, r - 1, c, p + "D"); // down
    allPaths(arr, r + 1, c, p + "U"); // up
    allPaths(arr, r, c + 1, p + "L"); // left

    arr[r][c] = true;
}
int main()
{
    bool array[3][3] = {{true, true, true}, {true, true, true}, {true, true, true}};
    allPaths(array, 3, 3, "");
    return 0;
}