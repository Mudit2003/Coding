#include<stdio.h>

int fibbonaci(int a);

int main(void)
{
    int x;
    printf("The number of terms in the given fibbonaci sequence :");
    scanf("%d" ,&x);
    fibbonaci(x);
       

}

int fibbonaci(int a)
{
    if(a==0)
    {
        return 0;
    }
    if(a==1)
    {
        return 1;
    }
    int num1=fibbonaci(a-1);
    int num2=fibbonaci(a-2);
     int y=num1+ num2;
    
    printf("fibbonaci sequence of %d is %d\n" ,a,y);
    return y;
}