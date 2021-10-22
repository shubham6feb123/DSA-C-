#include<iostream>
using namespace std;

void swap(int* &var){
cout<<"address of a "<<var<<endl;
};


int main()
{
    int a = 4;
    int* ptr = &a;

    int* &ptr2 = ptr;      //int** ptr2 = &ptr; //pointer to pointer representation
    cout<<"address of a "<<&a<<endl;
    cout<<"ptr variable containing address "<<ptr<<endl;
    cout<<"address of a pointer "<<&ptr<<endl;

    cout<<"ptr2 "<<ptr2<<endl;;
    swap(ptr2);

    return 0;
}