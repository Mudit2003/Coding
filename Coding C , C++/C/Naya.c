#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char Boy[7];
    printf("Who is the Boy?");
    for (int i=0;i<7;i++)
    { 
        
        Boy[i]=getchar();
    }
    for (int j=0;j<7;j++)
    {
        putchar(Boy[j]);
    }
    printf("/n");
    return 0;
}
