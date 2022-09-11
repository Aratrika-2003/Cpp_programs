#include"stack.h"

stack :: stack()
{
    tos = -1;
}

item stack :: isfull()
{
    if(tos == S-1)
        return 1;
    else
        return 0;
}

bool stack :: isempty()
{
    return (tos < 0);
}

bool stack :: push(item data)
{
    if(isfull())
    {
        cout << "Stack is full!!" << " ";
        return false;
    }
    else
    {
        arr[++tos] = data;
        cout << data << " " << "has been pushed into stack!!" << endl;
        return true;
    }
}

item stack :: pop()
{
    int key;
    if(isempty())
    {
        cout << "No elements to delete!!" << " ";
        return 0;
    }
    else
    {
        key = arr[tos--];
        return key;
    }
}

item stack :: peek()
{
    int key;
    if(isempty())
    {
        cout << "No elements present in stack!!" << " ";
        return 0;
    }
    else
    {
        key = arr[tos];
        return key;
    }
}