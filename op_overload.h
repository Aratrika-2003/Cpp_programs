#include<iostream>
using namespace std;

class array
{
    int *arr;
    int size;
    
    public:
        array();
        array(int size);
        void take_input();
        void display();
        array addarr(array temp);
        array operator+(const array &plus);
        array operator-(const array &sub);
        array operator*(const array &mult);
        friend ostream &operator<<(ostream &out,const array &ob);
        friend istream &operator>>(istream &in,const array &ob);
};