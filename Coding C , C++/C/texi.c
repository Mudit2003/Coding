#include <stdio.h>

int main(void){
    int charge , distance , nights ;
    char night ; 
    const int Fixed_charge = 200;

    printf("Do you wanna stay the night if yes(y) how many :");
    scanf("%c%d" ,&night ,&nights);

   

    printf("What is the total distance travelled :");
    scanf("%d" ,&distance);

    if (distance <= 15 )
    {
        charge = Fixed_charge;
    }
    else if (15<distance && distance<=35 )
    {
        charge = Fixed_charge + (distance - 15)*10;
    }
    else if (35<distance && distance<=85)
    {
        charge = Fixed_charge + 20*10 + (distance-35)*12;
    }
    else if (85<distance && distance<=185)
    {
        charge = Fixed_charge + 20*10 + 50*12 +  (distance-85)*15;
    }
    else 
     charge = Fixed_charge + 20*10 + 50*12 + 100*15 + (distance-185)*20 ; 

     if (night == 'y')
     {
        charge += nights*200;
     }
     

     printf("The total fare for the distance %d is : %d " ,distance , charge);
     
    
    

}