#include<iostream>
using namespace std;
#define item int

class LinkedList;

class node
{
    item data;
    node* next;

    public:
        node();
        node(item value);
        friend LinkedList;
        friend ostream& operator<<(ostream& out,const LinkedList& ob);
        friend ostream& operator<<(ostream& out,const node& ob);
};

class LinkedList
{
    node* head;

    public:
        LinkedList();
        void append(item val);
        void traverse();
        void addbef(item value);
        void addaft(item value);
        void delnode();
        //node* recrev();//printing the linked list recursively in rev order
        void reverse();//reversing the linked list
        node* searchpos(item pos);
        node* searchval(item val);
        void inssort();//insertion sort
        friend ostream& operator<<(ostream& out,const LinkedList& ob);
        //friend node;
};
