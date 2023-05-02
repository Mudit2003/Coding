#include <stdio.h>
#include <math.h>

int main(){
    int array[100];
    int N,M;
    printf("What is the value of M and N : ");
    scanf("%d%d" ,&M,&N);

    int i=0;
    int z=M;
    

    while (z!=0 && i<N)
    {
         z=M*(int)(pow(2,(double)i))%N;
         i++;
    }
    
    printf("The number of distinct interger is %d" , i);
}