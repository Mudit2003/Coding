#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(void){
      int degree , coefficents[100];
      float guess , value , error , solutions  ; 

      printf("What is the degree of the equation : ");
      scanf("%d",&degree);
      for (int i = 0; i <= degree; i++)
      {
          printf("What is the coefficent of x^%d " , i) ;
          scanf("%d" ,&coefficents[i]);
      }
      srand(time(0));
      guess = rand() / 100.0 ;


      printf("%f" , guess);
      value=0;


for (int j = 0; j < 50 ; j++)
{
        for (int i = 0; i < degree ; i++)
      {
          value += coefficents[i]*pow(guess,i);
               }
               value = pow(-value,1.0/degree);
                error = abs(value-guess);
         if (error < 0.001){
              solutions = guess ; 
              break; 
          }
          guess = value; 
          value =0;
}


printf("One of the solutions of this equation is %d " , solutions );
}

  
      
      