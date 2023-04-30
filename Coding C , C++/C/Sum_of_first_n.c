#include <stdio.h>

int sum_of_first_n_natural(int n);

int main(){
    int x;
    printf("What is the value of n:");7
    scanf("%d" ,&x);
    printf("%d",sum_of_first_n_natural(x));
}

int sum_of_first_n_natural(int n){
    if(n==0){
        return 0;
    }
    int y=n+sum_of_first_n_natural(n-1);
    return y;
}