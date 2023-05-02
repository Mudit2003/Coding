#include<stdio.h>
// Armstrong Number : The number is equal to sum of the nth power of its digits 
/* 153 = pow =3 ... 1 = 1 , 5 ,125 , 27 ... 1+125+27=153 */
int main(void){
int n;
printf("What is the number : ");
scanf("%d" ,n);

int count=0;
while((n/10) != 0)
{                        
   n/=10;
   count++;
}
printf("The value of count is %d" ,count);


return 0;
}