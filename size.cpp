//size of various data types

#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    /*char*/
    cout << "Size of char: " << sizeof(char) << endl;//1
    cout << "char minimum value: " << CHAR_MIN << endl;// -128
    cout << "char max value: " << CHAR_MAX << endl;//127

    /*int*/
    cout << "Size of int: " << sizeof(int) << endl;//4
    cout << "Sizeof short int: " << sizeof(short int) << endl;//2
    cout << "Sizeof long int: " << sizeof(long int) << endl;//4
    cout << "Sizeof signed int: " << sizeof(signed long int) << endl;//4
    cout << "Sizeof unsigned int: " << sizeof(unsigned long int) << endl;//4

    cout << "Size of float : " << sizeof(float) << endl;//float 4
    cout << "Size of double : " << sizeof(double) << endl;//double 8

    cout << "Sizeof wide character: " << sizeof(wchar_t) << " bytes" << endl;//2bytes

    return 0;
}

