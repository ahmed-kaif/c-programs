#include<stdio.h>

void transposeMatrix(int nRows, int nCols, int matrix1[nRows][nCols], int matrix2[nCols][nRows])
{
    int row,column;
    for(row=0;row<nRows;row++)
        for(column=0;column<nCols;column++)
        matrix2[column][row] = matrix1[row][column];
}
void displayMatrix(int nRows,int nCols,int matrix[nRows][nCols])
{
    int row,column;
    for(row=0;row<nRows;++row)
    {
        for(column=0;column<nCols;++column)
            printf("%5i",matrix[row][column]);

        printf("\n");
    }
}
int main(void)
{
    int array[4][5] = { { 4,5,6,2,5 },
                        {3,2,67,45,3},
                        {1,2,4,5,6 },
                        {12,4,5,67,8}
                      };
    int array2[5][4];
    transposeMatrix(4,5,array,array2);
    printf("Transposed Matrix:\n");
    displayMatrix(5,4,array2);

    return 0;
}
