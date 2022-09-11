#include"ll.h"

int main()
{
    LinkedList sll;
    node n(60);

    sll.append(0);
    sll.append(2);
    sll.addbef(4);
    sll.append(6);
    sll.addaft(8);
    sll.addbef(10);
    sll.append(12);

    cout << "The original linked list" << " ";
    sll.traverse();

    cout << endl;

    //sll.delnode();
    // sll.delnode();
    // sll.delnode();
    // sll.delnode();

    cout << "Linked list after deletion" << " ";
    sll.traverse();

    sll.reverse();

    cout << "Linked list after reversing" << " ";
    sll.traverse();

    sll.searchpos(4);
    sll.searchval(12);

    sll.inssort();

    cout << "The linked list after sorting" << " ";
    sll.traverse();

    return 0;
}