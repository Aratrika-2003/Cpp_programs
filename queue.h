#include<iostream>
using namespace std;
#define item int
#define q 50
class Queue
{
    int qarr[q];
    int front,rear;

    public:
        Queue();
        item isfull();
        bool isempty();
        void enq(item data);
        item deq();
        item peek();
};