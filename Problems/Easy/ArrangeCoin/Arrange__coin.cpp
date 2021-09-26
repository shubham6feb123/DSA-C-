#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int rows = 0;
    // int chalo = 1;
    for (int i = 1; n != 0; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (n == 0)
            {
              cout<<"n zero h"<<endl;
                break;
            }
            else
            {
                
                rows++;
                n--;
                cout<<rows<<endl;
            }
        }
    }

    if (n == 0)
    {
        cout << rows << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}