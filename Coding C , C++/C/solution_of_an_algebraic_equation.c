#include <stdio.h>
#include<math.h>
#include<string.h>


int main(int argc, char const *argv[])
{
   int algebraic_equations=0;
     
    int degree; 
    double x;
    printf("Tell me the degree of the equation : ");
    scanf("%d" ,&degree);
    int coefficents[degree];
    // printf("Tell me the equation motherfucker : ");
    // scanf("%d" ,&algebraic_equations);
    // // x^5 + 7x + 1 ,0 
    double y=0;
    
  for (int i = degree ; i >= 0; i--)
  {
      
      printf("What is the coefficent of x^%d : " , i);
      scanf("%d",&coefficents[degree-i]);
  }



// while(iterations<=50)
// {
//     for(int i=1; i<degree; i++)
//       {
//           y+=coefficents[i]*pow(x,degree-i);
//           printf("**%f\n",pow(x,2));
//       }
//       y=pow(-y,1.0/degree);
//       printf("%d %d \n",y,x);
    
//     x=y;
//     iterations++;

//     if(abs(x-y)<0.00001)
//         break;
}     
     
  printf("x=%lf",x);

    
    return 0;
}
