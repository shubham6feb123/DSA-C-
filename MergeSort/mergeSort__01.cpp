#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{

    int s1 = mid - l + 1;
    int s2 = r - mid;

    int a[s1];
    int b[s2]; //temp arrays

    for (int i = 0; i < s1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < s2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < s1 && j < s2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < s1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < s2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {4, 3, 5, 7, 6, 2};
    mergeSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}