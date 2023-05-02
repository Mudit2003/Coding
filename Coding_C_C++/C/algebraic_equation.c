#include<stdio.h>
#include<math.h>


int main(void)
{
    int  degree ;
    printf("What is the degree of the equation : ");
    scanf("%d" , &degree);
    int coefficents[degree+1];//equqted as *(coefficents + degree + 1)
    for (int i = 0; i<= degree; i++)
    {
        printf("What is the coefficent of x^%d" ,i );
        scanf("%d" ,&coefficents[i]);
    }


    float guess=1;
    float  y = 0 , z ,  solution , error = fabs(guess-solution) ;
    float iteration ; 
    
    
    for (int i = 0; i < 50 ; i++)
    {
        for (int i = 0; i < degree; i++)
        {
              y -= coefficents[i] * pow(guess , i )  ;
        }
        if (y<=0 && degree % 2==0 )
        {
            
            if (y!=0)
            {
                guess = -degree ; 
            }
             
            continue;
        }
        
        solution = pow(y/coefficents[degree],pow(degree,-1));
        if(error<0.00000001 ){
            break;
        }
        guess = solution;
       
        
    }

    printf("The solution of this equation is : %d " ,solution );
    


    
    return 0;
}
