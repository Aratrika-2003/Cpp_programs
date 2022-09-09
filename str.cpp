#include"str.h"

str :: str()
{
    strsize = 50;
    s = new char[strsize + 1];
}

str :: str(int size)
{
    s = new char[size + 1];
    this->strsize = size;
}

/*void str :: take_input()
{
    for(int i = 0; i < this->strsize; i++)
    {
        cin >> s[i];
    }
}

void str :: display()
{
    for(int i = 0; i < this->strsize; i++)
    {
        cout << this->s[i];
    }
    cout << endl;
}*/

int str :: length(str ob)
{
    int cnt = 0;
    for(int i = 0; ob.s[i] != '\0'; i++)
    {
        cnt++;
    }
    return cnt;
}

str str :: concat(str &ob)//concat
{
    int i;
    for(i = 0; i < ob.strsize; i++)
    {
        this->s[i] = this->s[i] + ob.s[i];
    }
    ob.s[i] = '\0';

    return *this;
}
void str :: copy(str &ob)//copy
{
    int i;
    for(i = 0; this->s[i] ='\0'; i++)
    {
        ob.s[i] = this->s[i];
    }
    ob.s[i] = '\0';
}

ostream &operator<<(ostream &out,const str &ob)
{
    out << "The elements of array " << endl;
    for(int i = 0; ob.s[i] != '\0'; i++)
    {
        out << ob.s[i] << " ";
    }
    out << endl;

    return out;
}

istream &operator>>(istream &in,const str &ob)
{
    for(int i = 0; i < ob.strsize; i++)
    {
        cout << "enter the elements at " << i << "th position";
        in >> ob.s[i];
    }
    ob.s[ob.strsize] = '\0';

     return in;
}