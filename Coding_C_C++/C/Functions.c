#include<stdio.h>
  
void bhago(char c){
    if(c=='f')
    printf("fast");
    else if(c=='s')
    printf("slow");
    else
    printf("null:apun to soega");
}

int sum(int a , int b){
  int c = a + b;
  return c ; 
}

int main(void){
 int a , b ;
 scanf("%d%d",&a,&b);
 int c=sum(a,b);
 printf("sum:%d\n",c);
}