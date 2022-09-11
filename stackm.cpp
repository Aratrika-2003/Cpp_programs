#include"stack.h"

int main()
{
    stack s;
    s.push(0);
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    s.push(12);

    cout << endl;

    cout << s.pop() << " " << "deleted from stack" << endl;
    cout << s.pop() << " " << "deleted from stack" << endl;
    cout << s.pop() << " " << "deleted from stack" << endl;

    cout << "Element at the top of the stack" << " " << s.peek() << endl;

    cout << "The remaining elements in stack : " << " ";
    while(!s.isempty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    return 0;
}