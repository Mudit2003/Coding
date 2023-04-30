#include<stdio.h>

int main(void){
    int n;
    printf("Integer you want to print : ");
    scanf("%d" ,&n);

         if(n%3==0 && n%5==0)
        {
            printf("FizzBuzz\n");
        }
        else if (n%3==0)
        {
            printf("Fizz\n");
        }
        
        else if(n%5==0)
        {
            printf("Buzz\n");
        }
        else{
            printf("%d\n" ,n);
        }
        
    
    
}