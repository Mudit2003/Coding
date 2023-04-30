#include<stdio.h>

int main(void){
    int number, c=0;
    printf("What is the number : ");
    scanf("%d" ,&number);

    for (int i = 1; i <= number/2; i++)
    {
        if (number%i==0 )
        {
           
           if(i!=1){printf("The number is not prime ");
           return 1;
           }
           continue;
        }
        
        break;
        
    }
    printf("The number is a prime ");
    
}