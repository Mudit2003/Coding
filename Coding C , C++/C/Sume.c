#include <stdio.h>

int sum(int A[],int x);

int main(void){
    int Array[0];
    int n;
    printf("What is the size of the array:");
    scanf("%d" ,&n);
   

    for (int i = 0; i < n; i++)
    {
        printf("What is the value of element %d :" ,i+1 );
        scanf("%d" ,&Array[i]);
        
    }
    
    
    printf("%d" ,sum(Array,n));
    return 0;
}

int sum(int A[] ,int x)
{
    int sum=0;
    for (int i = 0; i < x; i++)
    {
        sum+=A[i];
    }
    return sum;
    
}