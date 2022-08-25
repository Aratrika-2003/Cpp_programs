//Size of each data type in cpp
//Time complexity O(1)

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;//1
    cout << "Size of int : " << sizeof(int) << endl;//4
    cout << "Size of long : " << sizeof(long) << endl;//4
    cout << "Size of float : " << sizeof(float) << endl;//4
    cout << "Size of double : " << sizeof(double) << endl;//8

    return 0;
}
/*Data type modifiers->
    Signed(int,char,long prefix)
    Unsigned(int,char,short prefix)
    Long(int,double)
    Short(int)
*/