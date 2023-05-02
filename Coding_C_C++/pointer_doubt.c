#include<stdio.h>

int main(void){
    // char string[]={"Harry"};
    // char *p = string;
    // *p++;
    // printf("%s\n" ,string);
    int x = 7;
    int *X = &x;
    X++;
    printf("%d\n%u\n%u" , x , &x , *(X-1));

    // So we conclude that afer using pointer arithmetic we change the address the pointer is pointing to not affecting the variable into it;
}