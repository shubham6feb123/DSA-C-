#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //vector is a dynamic array
    vector<int> arr;
    cout << "size---> " << arr.capacity() << endl;
    arr.push_back(1);
    cout << "capacity---> " << arr.capacity() << endl;
    arr.push_back(2);
    cout << "capacity---> " << arr.capacity() << endl;
    arr.push_back(3);
    cout << "capacity---> " << arr.capacity() << endl;
    arr.push_back(4);
    cout << "capacity---> " << arr.capacity() << endl;

    cout<<"front "<<arr.front()<<endl;
    cout<<"back "<<arr.back()<<endl;

    return 0;
}