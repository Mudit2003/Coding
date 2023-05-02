#include <stdio.h>
#include "functions.h"

// typedef struct vector {
//     float x;
//     float y;
// } vector;

vector vector_sum(vector one, vector two)
{
    vector sum;
    sum.x = one.x + two.x;
    sum.y = one.y + two.y;
    return sum;
}

// dont forget termination statement with struct
int main(void)
{
    vector a, b, c;
    printf("What are the x and y components of vector a : ");
    scanf("%f%f", &a.x, &a.y);
    fflush(stdin);
    printf("What are the x and y components of vector b : ");
    scanf("%f%f", &b.x, &b.y);

    c = vector_sum(a, b);

    printf("The vector is : %0.2fx + %0.2fy ", c.x, c.y); // best to keep it 0.2f for two digit precision 
    return 0;
}