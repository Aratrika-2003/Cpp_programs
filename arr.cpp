#include"array.h"
/*ARRAY------------------------------------------------------*/
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
/*MATRIX------------------------------------------------*/
matrix :: matrix(int row,int colm)
{
    this->row = row;
    this->col = colm;
    this->arr = new int*[row]; 
    this->m = new int[row*colm];
    for(int i = 0; i < row; ++i)
    {
        this->arr[i] = m + i * colm;
    }
}

matrix :: matrix()
{
    row = 5,col = 5;
    this->row = row;
    this->col = col;
    this->arr = new int*[row];
    this->m = new int[row*col];

    for(int i = 0;i < row; ++i)
    {
        this->arr[i] = m + i * col;
    }
}

void matrix :: takeinp()
{
    for(int i = 0; i<  this->row; i++)
    {
        for(int j = 0; j < this->col; ++j)
            cin >> this->arr[i][j];
    }
}

void matrix::displaymat()
{
    for(int i = 0; i < this->row; i++)
    {
        for(int j = 0; j < this->col; j++)
            cout << this->arr[i][j] << " ";
        cout << endl;
    }
}

matrix matrix::addmat(matrix mat)
{
    matrix res(this->row,this->col);
    for(int i = 0; i < mat.row; i++)
    {
        for(int j = 0; j < mat.col; j++)
        {
            res.arr[i][j] = this->arr[i][j] + mat.arr[i][j];
        }
    }
    return res;
}

/*array array :: operator+(const array &ob)
{
    for(int i = 0; i < size; i++)
    {
        this->arr[i] = this->arr[i] + ob.arr[i];
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
}*/