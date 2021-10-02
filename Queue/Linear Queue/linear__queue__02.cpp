#include <iostream>
using namespace std;
#define SIZE 7
class Queue //in this queue we are doing data shifting
{
    int front;
    int rear;

public:
    int arr[SIZE];
    Queue()
    {
        rear = -1;
        front = 0;
    }

    bool EnQueue(int x)
    {
        if (rear >= SIZE - 1)
        {
            cout << "Queue OverFlow" << endl;
            return false;
        }
        else
        {
            arr[++rear] = x;
            return true;
        }
    }

    bool DeQueue()
    {
        if (front == rear + 1)
        {
            cout << "Queue UnderFlow" << endl;
            return false;
        }
        else
        {
            for (int i = 0; i < rear; i++)
            {
                arr[i] = arr[i + 1];
            }
            rear--;
            return true;
        }
    }

    int frontElement()
    {
        if (rear < 0)
        {
            return -1;
        }
        else
        {
            return arr[0];
        }
    }

    int rearElement()
    {
        if (rear < 0)
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }

    int size()
    {
        return rear + 1;
    }
};
int main()
{
    Queue q1;
    // cout<<"size "<<q1.size()<<endl;
    // cout<<"front element "<<q1.frontElement()<<endl;
    // cout<<"rear element "<<q1.rearElement()<<endl;

    // cout<<q1.DeQueue()<<endl;

    q1.EnQueue(1); //0
    q1.EnQueue(2); //1
    q1.EnQueue(3); //2
    q1.EnQueue(4); //3
    q1.EnQueue(5); //4
    q1.EnQueue(6); //5
    q1.EnQueue(7); //6
    cout << "size " << q1.size() << endl;
    q1.EnQueue(8);
    cout << "rear element " << q1.rearElement() << endl;
    cout << "front element " << q1.frontElement() << endl;

    q1.DeQueue();
    cout << "size " << q1.size() << endl;
    cout << "front element " << q1.frontElement() << endl;
    cout << "rear element " << q1.rearElement() << endl;

    return 0;
}