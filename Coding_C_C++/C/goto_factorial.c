#include<stdio.h>

int main(void){
    int n ; 
    printf("What is the number whose factorial is to be found : ");
    scanf("%d" ,&n);
    int j = 1 , i = n; 
    Label : 
       j*=i;
       i--;
      if (i>1) 
      goto Label;     
    
    printf("The factorial of %d is : %d " , n , j);


}