#include"queue.h"

Queue :: Queue()
{
    front = -1;
    rear = -1;
}

item Queue :: isfull()
{
    if((front == 0 && rear == q-1) || (front == rear+1))
        return 1;
    else
        return 0;
}

bool Queue :: isempty()
{
    return (front < 0 && rear < 0);
}

item Queue :: peek()
{
    int key;
    if(isempty())
    {
        cout << "No elements in the queue!";
        return 0;
    }
    else
    {
        key = qarr[front];
        return key;
    }
}

void Queue :: enq(int data)
{
    if(isfull())
    {
        cout << "Queue is full!!";
        return;
    }
    else
    {
        if(front == -1)
            front = 0;
        if(rear == q-1)
            rear = 0;
        
        qarr[++rear] = data;

        cout << data << " " << "has been enqueued!" << endl;
    }
}

item Queue :: deq()
{
    int key;
    if(isempty())
    {
        cout << "No elements to be dequeued!";
        return 0;
    }

    else
    {
        key = qarr[front];

        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if(front == q-1)
        {
            front = 0;
        }
        else
            front++;

        return key;
    }
}