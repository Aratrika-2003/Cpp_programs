#include"ll.h"

node :: node()
{
    this->next = NULL;
}

node :: node(item value)
{
    this->next = NULL;
    this->data = value;
}

LinkedList :: LinkedList()
{
    this->head = NULL;
}

void LinkedList :: append(item val)
{
    node* temp = new node(val);
    node* curr = head;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}

void LinkedList :: traverse()
{
    node* curr = head;

    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void LinkedList :: addbef(item value)
{
    node* temp = new node(value);
    
    if(head == NULL)
    {
        head=temp;
        return;
    }
        temp->next = head;
        head = temp;
}

void LinkedList :: addaft(item val)
{
    node* temp;
    node* curr = head;
    if(curr == NULL)
        return;
    temp = new node(val);

    temp->data = val;
    temp->next = curr->next;
    curr->next = temp;
}

void LinkedList :: delnode()
{
    node* temp;
    node* curr = head;
    temp = curr->next;
    curr->next = temp->next;
    delete(temp);
}

void LinkedList :: reverse()//reversing the linked list
{
    node* current;
    node* previous;
    node* next;
    previous = NULL;
    current = head;
    while(current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
}

node* LinkedList :: searchpos(item pos)
{
    node *curr = head,*temp = head;
    int i, count = 0;

    if(head == NULL)
    {
        cout << "Linked list is empty ";
        return NULL;
    }
    
    if(pos <= 0)
    {
        cout << "invalid position entered! ";
        return NULL;
    }

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    if(pos > count)
    {
        cout << "invalid position entered! ";
        return NULL;
    }

    for(i = 0; i < pos-1; i++)
    {
        curr = curr->next;
    }
    return curr;
}

node* LinkedList :: searchval(item val)
{
    node *curr = head;
    if(head == NULL)
    {
        cout << "Linked list is empty ";
        return NULL;
    }
    
    while(curr->data != val)
    {
        curr = curr->next;
    }
    return curr;
}

void LinkedList :: inssort()
{
    node *a,*b,*prev,*next,*curr;

    if(head == NULL)
        return;

    curr = head->next;
    prev = head;
    
    while(curr!=NULL)
    {
        a = NULL;
        b = head;
        while(b->data < curr->data && b != curr)
        {
            a = b;
            b = b->next;
        }
        if(b != curr)
        {
            prev->next = curr->next;
            curr->next = b;
            if(a == NULL)
            {
                head = curr;
            }
            else
            {
                a->next = curr;
            }
            curr = prev->next;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}


ostream& operator<<(ostream& out,const LinkedList& ob)
{
    node* curr = ob.head;

    while(curr != NULL)
    {
        out << curr->data << " ";
        curr = curr->next;
    }
    out << endl;

    return out;
}

ostream& operator<<(ostream& out,const node& ob)
{
    out << ob.data;

    return out;
}
