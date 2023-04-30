#include <stdio.h>


int main(int argc, char const *argv[])
{
    int kms , charge , Nights ;
    char Night;
    const int Fixed_charge = 200 ; // for 15 km
    
     printf("Would you stay the night , if yes enter y and enter the number of nights followed by space :  ");
    scanf("%c%d" , &Night , &Nights);

    printf("What is the total distance to be covered : ");
    scanf("%d" , &kms);
    printf("\n");

   

    
    if (kms <= 15)
    {
        charge = Fixed_charge ;
    }
    else if (15<kms && kms<=35)
    {
        charge = Fixed_charge + (kms - 15)*10;
    }
    else if(35<kms && kms<=85)
    {
        charge = Fixed_charge + (kms - 15)*10 + (kms -20)*12;
    }
    else if (85<kms && kms<=185)
    {
        charge = Fixed_charge + (kms - 15)*10 + (kms -20)*12 + (kms-50) * 15; 
    }
    else
    {
         charge = Fixed_charge + (kms - 15)*10 + (kms -20)*12 + (kms-50) * 15 + (kms-100)*20; 
    }
    
}
    if ( Night == 'y')
    {
        charge = 200 * Nights;
    }
    
    printf("Total Fare is : %d" , charge);
    
    
    return 0;
}
