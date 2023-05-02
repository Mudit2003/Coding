#include <stdio.h>
  
  /*int x =40;
int main(void){
   int x=20;
   printf("%d\n" ,x);   // Output was 20 local variable was preferred   
}*/

/*int main(void){
    int x=40;
    {
        int x=20;
        printf("%d\n" ,x);  // This gives 20
    }
    printf("%d\n" ,x);This gives 40 , that variable vanishes after this bracket 
}*/

/*int main(int argc, char const *argv[])
{
    extern int i;
    printf("%d" ,sizeof(i));   // Yields 4 as the result 
    return 0;
}*/

int X;
int X=0;
int X=33;

int main(int argc, char const *argv[])
{
    printf("The value of X is %d" ,X);
    return 0;
}

