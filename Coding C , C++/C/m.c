#include<stdio.h>

int main(void){
    float cost_price,selling_price,z;
    printf("What is the cost price of the product :");
    scanf("%d" ,&cost_price);
    printf("What is the selling price :");
    scanf("%d" ,&selling_price);
    z= selling_price - cost_price;
    if (z>0)
    {
    printf("Made a profit.The profit made is %f" ,z);
    }
    else if(z<0) {
     printf("Made a loss.The loss incurred is %f" ,z);
    }
    else
        printf("No profit no loss ");
    }