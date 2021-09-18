#include <iostream>
using namespace std;

//NOTE :-- To Implement This Algorithm Array Should be Sorted either in ascending or descending order
int BinarySearch(int target, int arr[], int arrSize)
{
    int s = 0;
    int e = arrSize - 1;
    int m = (s + e) / 2; //s+(e-s)/2;
    while (s <= e)
    {
        if (arr[m] == target)
        {
            return m;
        }
        else if (target > arr[m])
        {
            s = m + 1;
            m = (s + e) / 2;
        }
        else if (target < arr[m])
        {
            e = m - 1;
            m = (s + e) / 2;
        }
    }
    return -1;
};

int main()
{
    int arr[] = {100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};//{2, #include <iostream>
using namespace std;

//NOTE :-- To Implement This Algorithm Array Should be Sorted either in ascending or descending order
int BinarySearch(int target, int arr[], int arrSize)
{
    int s = 0;
    int e = arrSize - 1;
    int m = (s + e) / 2; //s+(e-s)/2;
    while (s <= e)
    {
        if (arr[m] == target)
        {
            return m;
        }
        else if (target > arr[m])
        {
            s = m + 1;
            m = (s + e) / 2;
        }
        else if (target < arr[m])
        {
            e = m - 1;
            m = (s + e) / 2;
        }
    }
    return -1;
};

int main()
{
    int arr[] = {100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};//{2, 4, 6, 9, 11, 12, 14, 20, 36, 48};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the element to find from an array : ";
    cin >> key;
    int ansIndex = BinarySearch(key, arr, arrSize);
    cout << "Index No. " << ansIndex << endl;
    if (ansIndex == -1)
    {
        cout << "Answer Not Found !!!" << endl;
    }
    else
    {
        cout << "Array element corresponding to the Index No. : " << arr[ansIndex];
    }
    return 0;
}