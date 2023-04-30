#include <stdio.h>

int main(void)
{
    int number;
    printf("Number de bsdk:");
    scanf("%d" ,&number);
    int factors[8];
     int j=0;
     for(int i=1;i<number;i++)
     {
        if(number % i==0)
        {
            factors[j]=i;
            j++;
        }
        i++;

     }
     for (int i = 0; i==j; i++)
     {
        printf("%d" ,factors[j]);
     }
     
}