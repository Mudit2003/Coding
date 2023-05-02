#include<stdio.h>
#include<stdlib.h>// std lib is a library which allows us to use the functions to dynamically allocate memory 

 struct node{
  int info ; 
  struct node* link ;
};

struct node* insertatbeg(struct node* start , int item ){
   struct node* new = (struct node*)malloc(sizeof(struct node));
   new->info = item ;
   new->link = start ;
   return start;
}

struct node* insertatindex(int index , struct node* start , int item ){
if(index==0){
 start =insertatbeg(start , item);
}
struct node* ptr = start ;
count= 0 ; 
while(ptr!=NULL ){
   if(count == index-1){
      insertatbeg(start , item);
   }
   count ++ ;
   ptr = ptr->link;
}
}

struct node* createlist(struct node* start ){
   
}
int main(void){
struct node* start = NULL ; 
//start = insertatbeg(start , 7);

return 0 ;
}
