#include <iostream>
using namespace std;
int main()
{
    int array[] = {3,5,7,8,9,0,1};
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size - 1; i++)
    {
       
        for(int j=i+1;j>0;j--)
        {
            if (array[j] < array[j-1])
            {
                //swap
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }

//printing
    for (int i = 0; i <= size - 1; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
