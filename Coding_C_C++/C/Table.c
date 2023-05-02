#include <stdio.h>

void table(int a);
int main(void)
{
   int x;
   printf("What number do you want a table of :");
   scanf("%d" ,&x);
   printf("\n");
   table(x);
}

void table(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n" ,a,i,a*i);
    }
    
}