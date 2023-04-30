#include<stdio.h>


void multable ( int* number , int multiple );// Function to print multable 
int main(void){
    int num[10], mult;
    printf("What are the numbers whose multiples are to be printed:");
   for (int i = 0; i < 10; i++)
   {
    scanf("%d" ,&num[i]);
   }
   printf("How many multiples are to be printed : ");
   scanf("%d" ,&mult);
   multable(num,mult);
    return 0; 

}
int j = 10; ;
void multable (int*number , int multiple){
      if(j==0)return ; 

      for (int i = 1; i <= multiple; i++)
      {
        printf("%d X %d = %d\n" , *number , i , *(number) * i );
      }
      printf("*********    X    ************\n");
      j--, number++; 
      multable(number,multiple);
}