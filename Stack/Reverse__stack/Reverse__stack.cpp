#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int elem = st.top();
    st.pop();
    reverse(st);
}

int main()
{

    return 0;
}