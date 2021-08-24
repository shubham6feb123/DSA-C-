#include <iostream>
using namespace std;

//NOTE :-- To Implement This Algorithm Array Should be Sorted either in ascending or descending order
int BinarySearch(int target, int arr[], int arrSize)
{
    int s = 0;
    int e = arrSize - 1;
    while (s <= e)
    {
            int m = (s + e) / 2; //s+(e-s)/2;
        if (arr[m] == target)
        {
            return m;
        }
        else if (target > arr[m])
        {
            e = m - 1;
        }
        else if (target < arr[m])
        {
            s = m + 1;
        }
    }
    return -1;
};

int main()
{
    //here array is in descending order
    int arr[15] = {20,15,13,12,10,9,6,4,2,0,-5,-6,-10,-12,-16};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the element to find from an array : ";
    cin >> key;
    int ansIndex = BinarySearch(key, arr, arrSize);
    if (ansIndex == -1)
    {
        cout << "Answer Not Found !!!" << endl;
    }
    else
    {
        cout << "Index No. " << ansIndex << endl;
        cout << "Array element corresponding to the Index No. : " << arr[ansIndex];
    }
    return 0;
}