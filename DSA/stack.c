#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
int Array[20];
int* top = NULL;
}stack;
/*typedef struct stackl{
int item;
sllnode* top;
}stackl;*/

typedef struct sllnode{
    int item ;
    struct sllnode* next;
}stackl;

stackl* push(stackl* top , int item){
   stackl* new = (stackl*)malloc(sizeof(stackl));
   new->item = item ; 
   new->next = top ; 
   return top = new ; 
}

stackl* pop(stackl* top){
   stackl* temp = top ; 
   top = top->next ; 
   free(temp);
   return top ; 
}

int* inserttop(stack s , int item){
 if(s.top==&s.Array[0]){
    printf("Stack Overflow\n");
    return s.top;
 }
 
 if(s.top == NULL){
   s.top = &s.Array[19];
   }tt
   else{
    s.top--;
    // s.top = &s.Array[18];
   }
   *(s.top)=item;
   return s.top;
}

int main(void){
stackl* top = NULL ;
}