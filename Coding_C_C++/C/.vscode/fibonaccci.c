#include<stdio.h>

int fibonacci (int a);
int main(void){
  int n = 7;
  printf("%d" , fibonacci(n));
}
int y;
int fibonacci (int a){
    
    int y;
    if (a==0)
    {
        y=0;
        return y;
    }
    if (a==1)
    {
        y=1;
        return y;
    }
    // int num_1 = fibonaccci(a-1);
    // int num_2 = fibonacci
    y=fibonacci(a-1) + fibonacci(a-2);
    printf("%d ," , y);
    return y;
    

}