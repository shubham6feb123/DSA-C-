#include <iostream>
using namespace std;
// int BinarySearch_IN_2D_Array(int target){

// };
int main()
{
    // int arr[4][4] = {
    //     {10, 20, 30, 40},
    //     {15, 25, 35, 45},
    //     {28, 29, 37, 49},
    //     {33, 34, 38, 50}};

    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int target = 100;
    bool ans = false;

    for (int r = 0; r < 4; r++)
    {
        int c = 0;
        int s = c;
        int e = 3;
        while (s <= e)
        {
            int m = (s + e) / 2;
            if (arr[r][m] == target)
            {
                cout << "Target Found at " << r << "--" << m << endl;
                ans = true;
                break;
            }
            if (arr[r][m] > target)
            {
                e = m - 1;
            }

            if (arr[r][m] < target)
            {
                s = m + 1;
            }
        }
    }

    ans ? cout << "" : cout << "not found";

    return 0;
}