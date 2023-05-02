#include<stdio.h>

int main(void){
    // Less than 100 
    int p = 3 , q = 7;
    int i =1;
    int z;
    Label: z=p*i;
    if(z<100){
    if(z%7 != 0 ){
    printf("%d ," ,z);
    }
    i++;
    goto Label;
    }

}