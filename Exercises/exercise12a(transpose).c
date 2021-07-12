#include<stdio.h>

void transposeMatrix(int matrix1[4][5], int matrix2[5][4])
{
    int row,column;
    for(row=0;row<4;row++)
        for(column=0;column<5;column++)
        matrix2[column][row] = matrix1[row][column];
}
void displayMatrix(int matrix[5][4])
{
  int row,column;
  for(row=0;row<5;++row){
    for(column = 0; column<4; ++column)
    printf("%5i",matrix[row][column]);

    printf("\n");}
}
int main(void)
{
    int array[4][5] = { { 4,5,6,2,5 },
                        {3,2,67,45,3},
                        {1,2,4,5,6 },
                        {12,4,5,67,8}
                      };

    int array2[5][4];
       transposeMatrix(array,array2);

       printf("Transposed matrix:\n");
       displayMatrix(array2);

       return 0;
}
