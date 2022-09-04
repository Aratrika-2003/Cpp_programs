#include"op_overload.h"

int main()
{
    int size;
    cout << "enter the size of array " << endl;
    cin >> size;

    array a1(size),a2(size),a3(size);
    

    //a1.take_input();
    cin >> a1;
    cout << "A1 input over" << endl;

    //a2.take_input();
    cin >> a2;
    cout << "A2 input over" << endl;

    //a3 = a1.addarr(a2);
    a3 = a1+a2;
    //a3.display();

    cout << "a1";
    cout << a1;

    cout << "a2";
    cout << a2;
    
    cout << "result is ";
    cout << a3;

    return 0;
}