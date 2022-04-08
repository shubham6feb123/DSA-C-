#include <iostream>
using namespace std;
int main()
{
    int array[] = {3, 5, 7, 8, 9, 0, 1};
    int n = sizeof(array) / sizeof(array[0]); // 7

    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = temp;
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
