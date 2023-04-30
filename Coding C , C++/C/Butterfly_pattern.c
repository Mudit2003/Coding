#include<stdio.h>

int main(void){
    int n; 
    printf("What is the value of n :  ");
    scanf("%d" , &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n-i; j>=0; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 1 , 3, 5 , 
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
          printf("*");
        }
        printf("\n");
        
    }
    // for (int i = n; i >0; i--)
    // {
    //     for (int j = n-i; j > 0; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= 2*i-1; k++)
    //     {
    //       printf("*");
    //     }
    //     printf("\n");
        int x =1 ;
        for (int i = n-1; i > 0 ; i--)
        {
           
           for (int k = 1; k <=  x ; k++)
           {
               printf(" ");
           }
           
           for (int j = 1; j <= 2*i-1 ; j++)
           {
               printf("*");
           }
           
            printf("\n");
            x++;
        }
        
    
    


}