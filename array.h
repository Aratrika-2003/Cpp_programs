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
        array add(array temp);
};

class matrix
{
    int **arr,*res;
    int row;
    int col;

    public:
        matrix();
        matrix(int row,int col)
        void takeinp();
        matrix addmat(matrix mat)
        void displaymat();
};
