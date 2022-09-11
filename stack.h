#include<iostream>
using namespace std;
#define item int
#define S 50
class stack
{
    item arr[S];
    int tos;

    public:
        stack();
        item isfull();
        bool isempty();
        bool push(item data);
        item pop();
        item peek();
};