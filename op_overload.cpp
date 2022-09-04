#include"op_overload.h"

array :: array(int size)
{
    arr = new int[size];
    this->size= size;
}

array :: array()
{
    size = 5;
    arr = new int[size];
}

void array :: take_input()
{
    for(int i = 0; i < this->size; i++)
        cin >> arr[i]; 
}

void array::display()
{
    for (int i = 0; i < this->size; ++i)
    {
        cout << this->arr[i] <<  " ";
    }
    cout<< endl;
}

array array::addarr(array temp)
{
    array res(this->size);
    for(int i = 0; i < temp.size; ++i)
    {
        res.arr[i] = this->arr[i] + temp.arr[i];
    }
    return res;
}

array array :: operator+(const array &plus)
{
    for(int i = 0; i < size; i++)
    {
        this->arr[i] = this->arr[i] + plus.arr[i];
    }
    return *this;
}

array array :: operator-(const array &sub)
{
    for(int i = 0; i < size; i++)
    {
        this->arr[i] = this->arr[i] - sub.arr[i];
    }
    return *this;
}

array array ::operator*(const array &mult)
{
    for(int i = 0; i < size; i++)
    {
        this->arr[i] = this->arr[i] * mult.arr[i];
    }
    return *this;
}

ostream &operator<<(ostream &out,const array &ob)
{
    out << "The elements of array " << endl;
    for(int i = 0; i < ob.size; i++)
    {
        out << ob.arr[i] << " ";
    }
    out << endl;

    return out;
}

istream &operator>>(istream &in,const array &ob)
{
    for(int i = 0; i < ob.size; i++)
    {
        cout << "enter the elements at " << i << "th position";
        in >> ob.arr[i];
    }

    return in;
}
