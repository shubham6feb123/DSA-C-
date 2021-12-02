#include <iostream>
using namespace std;
void bubbleSort(int *arr, int size)
{
    if(size==1){
        return ;
    }

    for(int i=0;i<size-1;i++){
        if(*(arr+i)>*(arr+i+1)){
            //swap
            int temp = *(arr+i);
            *(arr+i) = *(arr+i+1);
            *(arr+i+1) = temp;
        }
    }

    bubbleSort(arr,--size);
}

int main()
{
    int array[] = {9,3,5,7,1,4,2,8,6,0};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}