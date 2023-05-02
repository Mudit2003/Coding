#include <stdio.h>

void display(int array[10][10], int Row, int Column);



int main(int argc, char const *argv[])
{
    int Array[10][10], row, column;
    printf("What is the number of rows and column in the array : ");
    scanf("%d%d", &row, &column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("What is the value of Array[%d][%d] :", i, j);
            scanf("%d", &Array[i][j]);
        }
    }

    // display(Array, row, column);

    return 0;
}

void display(int array[10][10], int Row, int Column)
{

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Column; j++)
        {
            printf("%d",array[i][j]);
            j != Column-1 ? printf(",") : printf("\n");
        }
    }

    
}