#include <stdio.h>

void display(int array[10] , int n);
int knapSack(int W , int weight[10] , int value[10] , int n);

int main(void){
    int W , n ; 
    int weight[10] , value[10];
    printf("Capacity:");
    scanf("%d" , &W);
    printf("No. of items:");
    scanf("%d" , &n);
    printf("Weight array:");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &weight[i]);
    }
    printf("Value array:");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &value[i]);
    }
    printf("%d",knapSack(W , weight , value , n));
    return 0;
    }

int knapSack(int W , int weight[10] , int value[10] , int n){
    int perKgValue[n];
    for(int i= 0 ; i < n ; i++){
        perKgValue[i] = value[i]/weight[i];
    }
    display(perKgValue , n);
    int profit = 0 , max;  
    while(W){
        max = 0; 
        for(int i= 1 ; i<n ; i++){
            if(perKgValue[i] > perKgValue[max]){
                max = i ; 
            }
        }
        if (weight[max] <= W){
            W -= weight[max];
            profit+= value[max];
        }else{
            profit += perKgValue[max]*W;
            W = 0 ; 
        }
            perKgValue[max] = 0 ; 
    }
    return profit;
}

void display(int array[10] , int n){
    for(int i= 0 ; i < n ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}