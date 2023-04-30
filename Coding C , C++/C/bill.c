#include<stdio.h>

int main(void){
    int units ,bill;

    printf("What is the total unit consumed : ");
    scanf("%d" ,&units);

    if (units <= 50)
    {
        bill = 50* units;
        
    }
    else if (50<units && units <= 150)
    {
        bill = 50*50  + 75 * (units-50); 
    }
    else if (150<units && units <= 250)
    {
        bill = 50* 50  + 75 * 100 + 120 * (units - 150);
    }
    else
    {
        bill =  50*50 + 75 *100 + 120 * 100 + (units -250)*150;
    }
   
    float total_bill = (float)bill/100.0 + 0.2*((float)bill/100.0 );

    printf("Bijli ka bill jo mera baap bharega wo hai : %f %d" , total_bill ,bill) ;
    

}