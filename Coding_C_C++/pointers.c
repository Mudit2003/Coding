#include<stdio.h>

int main(void){
    // stack is where all the information regarding fucnction call and local variable are stored 
    //  use constant pointer when you're sending stuff to a fucntion you don't want to be overwritten ;
    char *c = "Hello"; // treated as constant string in my compiler iso c/c++ forbids the assignment itself by giving a warning 
    c[0] = 'a';
    
}