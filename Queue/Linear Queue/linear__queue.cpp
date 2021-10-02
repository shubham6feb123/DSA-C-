#include <iostream>
using namespace std;
#define MAXSIZE 5 //size of an array
class Queue       //property----->FIFO (First In First Out)
{
    int front;
    int rear;

public:
    int array[MAXSIZE]; //Our Queue which is an array
    Queue()
    { //constructor
        this->front = -1;
        this->rear = -1;
    }

    //inserting element into queue
    bool EnQueue(int x)
    {
        if (rear > MAXSIZE - 1)
        {
            cout << "Queue Overflow" << endl;
            return false;
        }
        else
        {
            front < 0 && ++front;
            array[++rear] = x;
            cout << "Item " << x << " Pushed into Queue" << endl;
            return true;
        }
    };

    bool DeQueue()//Deleting element from Queue
    {
        if (front < 0)
        {
            cout << "Queue Underflow" << endl;
            return false;
        }else if(rear==front){
            cout << "Item " << array[front] << " removed from Queue" << endl;
            rear = -1;
            front = -1;
            return true;
        }
        else
        {
            cout << "Item " << array[front] << " removed from Queue" << endl;
            front++;
            return true;
        }
    }

    int isEmpty()
    {
        if (rear < 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isFull()
    {
        if (rear > MAXSIZE - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void frontElement()
    {
        if (!isEmpty())
        {
            cout << "Item at Front " << array[front] << endl;
        }
        else
        {
            cout << "Item at Front " << -1 << endl;
        }
    }

    void rearElement()
    {
        if (!isEmpty())
        {
            cout << "Item at Rear " << array[rear] << endl;
        }
        else
        {
           cout << "Item at Rear " << -1 << endl;
        }
    }
};
int main()
{
    Queue q1;
    cout << q1.EnQueue(1) << endl;
    cout << q1.isEmpty() << endl;
    q1.frontElement();

    cout<<q1.DeQueue()<<endl;
    cout<<q1.isEmpty()<<endl;

    q1.rearElement();

    return 0;
}