#include<stdio.h>
#include<stdlib.h>
// typedef - used to give a nickname to any structure 
/*typedef struct queue{
struct queueL nodeL ; 
struct queueL* front;
struct queueL* rear; 
};*/
typedef struct queue{
int front;
int array[20];
int rear;
}queue;


struct node{
  int info; 
  struct node* link ;
};

void enque(struct node** front , struct node** rear , int item){
  struct node* new =(struct node*)malloc(sizeof(struct node));
  new->info = item ; 
  new->link = NULL ; 
  if(*front==NULL){
  *front = new ; 
  *rear = new ; 
  return ; 
  }
  struct node* back = *rear; 
  back->link = new; 
  *rear = new ; 
  return ; 
 }

 void dequeue(struct node** front , struct node** rear){
  if(*front==NULL)return ; 
  if(*front==*rear){
    free(*front);
    *front = NULL , *rear = NULL ; 
  }
  struct node* temp = *front ; 
  temp = temp->link ; 
  free(*front);
  *front = temp ; 
  return ; 
 }


int main(void){
struct node* front = NULL , *rear = NULL ; 
int choice = 1 , item; 
while(choice <=3 && choice>0){
  if(choice==1){
    scanf("%d" , &item);
    enque(&front , &rear , item);
  }
  if(choice==2)
  dequeue(&front , &rear);
  scanf("%d",&choice);
}

return 0;
}
// queue enque(queue q ,  int item ){
//     if(q.rear>=19)
//     return q;
//     if(q.front==-1){
//      q.front++; 
//     }
//     q.array[++q.rear]=item;
//     return q ; 
// }



// queue deque(queue q){
  
//   q.front++;
//   return q;
// }


