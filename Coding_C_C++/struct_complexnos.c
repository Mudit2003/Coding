#include<stdio.h>

typedef struct complex_nos{
    float a ; 
    float b;
}complex_nos;

complex_nos display(complex_nos value){
    printf("%f + %f \n" , value.a , value.b);
}


int main(void){

}