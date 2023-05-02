#include<stdio.h>

int main(void){
    char str_1[20] , str_2[20] , c;
    int i = 0; 
    printf("String 1 : "  );
    scanf("%s" , str_1);
    // fflush(stdin);
    // scanf("%c" ,&c);
    while(str_2[i-1] != '\n'){
    fflush(stdin);
    scanf("%c" ,&str_2[i]);
    
    // str_2[i] = '\0';
    i++;  
    }
    str_2[i-1]='\0';
    printf("The value of first string is this %s and second string is %s " , str_1 , str_2);
} 