#include<iostream>
#include<string.h>
using namespace std;

class str
{
    char *s;
    int strsize;
    public:
        str();//default constructor
        str(int size);//parameterized constructor
        // void take_input();
        // void display();
        str concat(str &ob);//concat
        void copy(str &ob);//copy
        int length(str ob);
        friend ostream &operator<<(ostream &out,const str &ob);
        friend istream &operator>>(istream &in,const str &ob);
        //str operator=(const str &ob);compare
        //str operator/(const str &ob);//finding substring
};