#include<stdio.h>

int main(void){
    // Sum for less than 100 
    int n = 7; 
    int i = 1 ;
    int sum=0;
    Label : sum+=n*i;
    i++;
    if (i*n<100)
    {
        goto Label;
    }
    printf("The sum of all multiples of 7 less than 100 is %d " , sum);
    

}