#include"queue.h"

int main()
{
    Queue que;
    que.enq(0);
    que.enq(2);
    que.enq(4);
    que.enq(6);
    que.enq(8);
    que.enq(10);
    que.enq(12);

    cout << endl;

    cout << que.deq() << " " << "has been dequeued" << endl;
    cout << que.deq() << " " << "has been dequeued" << endl;
    cout << que.deq() << " " << "has been dequeued" << endl;

    cout << "Element at the top of the queue: " << " " << que.peek() << endl;
    
    cout << "The remaining elements in the queue:" << " ";
    while(!que.isempty())
    {
        cout << que.peek() << " ";
        que.deq();
    }

    return 0;
}