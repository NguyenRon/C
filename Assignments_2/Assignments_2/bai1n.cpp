#include <iostream>
using namespace std;

const int GRID_SIZE = 3; 

bool isLoShuMagicSquare(const double[][GRID_SIZE]);
double sumOfEachRow(const double[][GRID_SIZE]);
double sumOfEachColumn(const double[][GRID_SIZE]);
double sumOfDiagonalTopLeftToRight(const double[][GRID_SIZE]);
double sumOfDiagonalTopRightToLeft(const double[][GRID_SIZE]);

int main()
{
    double grid_array_1[GRID_SIZE][GRID_SIZE] = {{1, 2, 3},
                                                 {4, 5, 6},
                                                 {7, 8, 9}},

           grid_array_2[GRID_SIZE][GRID_SIZE] = {{4, 9, 2},
                                                 {3, 5, 7},
                                                 {8, 1, 6}};

    cout << "Array is";
    cout << (isLoShuMagicSquare(grid_array_2) ? " " : " NOT ");
    cout << "a Lo Shu Magic Square!" 
         << endl;
    
    return 0;
}

double sumOfEachRow(const double array[][GRID_SIZE])
{
    double total;

    for(int row = 0; row < GRID_SIZE; row++)
    {
        total = 0;
        for(int column = 0; column < GRID_SIZE; column++)
            total += array[row][column];


    }
    return total;
}

double sumOfEachColumn(const double array[][GRID_SIZE])
{
    double total;
    for(int columns = 0; columns < GRID_SIZE; columns++)
    {
        total = 0;
        for (int row = 0; row < GRID_SIZE; row++)
            total += array[row][columns];

    }
    return total;
}

double sumOfDiagonalTopLeftToRight(const double array[][GRID_SIZE])
{
    double total = 0;

  
    
    for(int i = 0; i < GRID_SIZE; i++)
        total += array[i][i];

    return total;
}

double sumOfDiagonalTopRightToLeft(const double array[][GRID_SIZE])
{
    double total = 0;



    int column = (GRID_SIZE - 1); 
    for (int row = 0; row < GRID_SIZE; row++)
    {
        total += array[row][column];
        column--;
    }


    return total;
}

bool isLoShuMagicSquare(const double array[][GRID_SIZE])
{
    if(
        sumOfEachRow(array)              == 15 &&
        sumOfEachColumn(array)           == 15 &&
        sumOfDiagonalTopLeftToRight(array)  == 15 &&
        sumOfDiagonalTopRightToLeft(array)  == 15
       )
        return true;
    else
        return false;
}