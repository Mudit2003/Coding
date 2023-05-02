#include<stdio.h>

int main(void){
    int n = 8  ;
    float average = 0;

    // for (int i =  1; i <= n; i++)
    // {
    //         average+=i/(float)n;
    // }
    
    // int i =1 ;
    // while (i<=n)
    // {
    //     average+=i/(float)n;
    //     i++;

    // }
    int i =1;
    do
    {
        average += i/(float)n;
        i++;
    } while (i<=n);
    
    printf("The average is %f " , average );
    
    
}