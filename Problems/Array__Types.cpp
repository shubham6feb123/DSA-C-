#include <iostream>
using namespace std;

int main()
{

    // 2D array
    int x[3][4] = {{0, 1, 2, 3},
                   {4, 5, 6, 7},
                   {8, 9, 10, 11}};

    cout << x[2][1] << endl;

    //3D array
    int y[2][3][4] =
        {
            {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}},
            {{12, 13, 14, 15}, {16, 17, 18, 19}, {20, 21, 22, 23}}};

            cout << y[1][1][2] << endl;

    return 0;
}