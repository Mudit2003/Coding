#include<stdio.h>
#include "array_functions.h"

int main(void){
    int Array[10] , length;
    printf("What is the length of the array : ");
    scanf("%d" ,&length);
    for(int i=0 ; i < length ; i++){
        printf("What is the value of element Array[%d]" ,i);
        scanf("%d" ,&Array[i]);
    }
     
     reverse(Array , length);
   
    // for(int i=0 ; i < length ; i++){
       
    //     printf("The value of element Array[%d] :%d\n" ,Array[i] ,i);
        
    // }
    
    for (int i = 0; i < length; i++)
    {
        printf("%d\n" , *(Array+i));
    }
    

}
    
    