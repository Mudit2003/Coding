#include <stdio.h>

int main(void){
    int array[]{1,2,3,4,5,6,7,8};// This assignment gives an error with MSVSC compiler 
    for (int i = 0; i < 8; i++)
    {
        if (array[i]==5)
        {
            printf("Found it at index %i\n" , i);
            return 0;
        }
    }           
    printf("Chutiya banaya aapne\n");
    return 1;
}

