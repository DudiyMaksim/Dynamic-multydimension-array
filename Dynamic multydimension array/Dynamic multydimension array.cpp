#include <iostream>

using namespace std;
void swapmatrixr(int **matrix,int where, int howm,int size) 
{
    int** matrix2 = new int* [size];
    for (size_t i = 0; i < size; i++)
    {
        matrix2[i] = new int[size];
    }

    switch (where)
    {
    //right
    case 1:
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                int b;
                if ((j - howm)<0)
                {
                    b = size+j - howm;
                }
                else
                {
                    b = j - howm;
                }
                matrix2[i][j] = matrix[i][b];
            }
        }
        break;
    //left
    case 2:
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                int b;
                if ((j + howm) >= size)
                {
                    b = j + howm-size;
                }
                else
                {
                    b = j + howm;
                }
                matrix2[i][j] = matrix[i][b];
            }
        }
        break;
    //bottom
    case 3:
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                int b;
                if (i-howm<0)
                {
                    b = size + i - howm;
                }
                else
                {
                    b = i - howm;
                }
                matrix2[i][j] = matrix[b][j];
            }
        }
        break;
    //bottom
    case 4:
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                int b;
                if ((i + howm) >= size)
                {
                    b = i + howm - size;
                }
                else
                {
                    b = i + howm;
                }
                matrix2[i][j] = matrix[b][j];
            }
        }
        break;
    default:
        break;
    }
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cout << matrix2[i][j] << " ";
        }cout << endl;
    }
    for (size_t i = 0; i < size; i++)
    {
        delete[] matrix2[i];
    }
    delete[] matrix2;
}


int main()
{
    /*task 1*/
    /*int sizeofmatrix;
    cout << "Enter size of matrix : ";
    cin >> sizeofmatrix;
    int** matrix = new int* [sizeofmatrix];
    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        matrix[i] = new int[sizeofmatrix];
    }

    int a;
    cout << "Enter first number : ";
    cin >> a;
    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        for (size_t j = 0; j < sizeofmatrix; j++)
        {
            matrix[i][j] = a;
            a *= 2;
        }
    }

    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        for (size_t j = 0; j < sizeofmatrix; j++)
        {
            cout << matrix[i][j] << " ";
        }cout << endl;
    }



    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;*/
    /*task 2*/
    /*int sizeofmatrix;
    cout << "Enter size of matrix : ";
    cin >> sizeofmatrix;
    int** matrix = new int* [sizeofmatrix];
    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        matrix[i] = new int[sizeofmatrix];
    }

    int a;
    cout << "Enter first number : ";
    cin >> a;
    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        for (size_t j = 0; j < sizeofmatrix; j++)
        {
            matrix[i][j] = a;
            a++;
        }
    }

    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        for (size_t j = 0; j < sizeofmatrix; j++)
        {
            cout << matrix[i][j] << " ";
        }cout << endl;
    }



    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;*/
    /*task 3*/
    /*srand(time(NULL));
    int sizeofmatrix;
    cout << "Enter size of matrix : ";
    cin >> sizeofmatrix;
    int** matrix = new int* [sizeofmatrix];
    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        matrix[i] = new int[sizeofmatrix];
    }
    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        for (size_t j = 0; j < sizeofmatrix; j++)
        {
            matrix[i][j] = rand()%10+1;
        }
    }

    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        for (size_t j = 0; j < sizeofmatrix; j++)
        {
            cout << matrix[i][j] << " ";
        }cout << endl;
    }

    int choice, howm;
    cout << "Enter \"1\"to right or \"2\"to left or \"3\"to bottom or \"4\"to top : ";
    cin >> choice;
    cout << "Enter lenght of displacement : ";
    cin >> howm;
    swapmatrixr(matrix, choice, howm, sizeofmatrix);


    for (size_t i = 0; i < sizeofmatrix; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;*/
}
