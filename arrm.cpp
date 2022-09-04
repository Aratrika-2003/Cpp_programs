#include"array.h"

int main()
{
    /*array*/
    int sizearr,row,col;

    cout << "Enter the size of array";
    cin >> sizearr;

    array a1(sizearr);
    array a2(sizearr);
    array a3(sizearr);

    a1.take_input();
	a1.display();
    cout << "A1 input over" << endl;

    a2.take_input();
	a2.display();
    cout << "A2 input over" << endl;

    a3 = a1.add(a2);
    a3.display();
  
    /*matrix*/
    
    cout << "Enter the size of row and column";
    cin >> row >> col;
    matrix m1(row,col);
    matrix m2(row,col);
    matrix m3(row,col);
	
    m1.takeinp();
    m1.displaymat();
	
    m2.takeinp();
    m2.displaymat();
	
    m3 = m1.addmat(m2);
    m3.displaymat();
	
    return 0;
}
