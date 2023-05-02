#include<stdio.h>

struct type{
    struct type* b ; 
    int a ;
   int  b ; 
}

int main(void){
    struct type a ; 
   a.b = -&a ; 
}