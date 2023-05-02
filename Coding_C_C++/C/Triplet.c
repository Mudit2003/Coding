#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("What is the value of a:");
    scanf("%d" ,&a);1
    printf("\n");
    printf("What is the value of b:");
    scanf("%d" ,&b);
    printf("\n");
    printf("What is the value of c:");
    scanf("%d" ,&c);
    printf("\n");
    
    if (a<b<c || a>b>c)
    {
        printf("%d" ,1);
    }
    else
    {
        printf("%d" ,0);
    }
    return 0;
}
