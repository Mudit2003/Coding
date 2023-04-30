#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
int data ;
struct node* next ;
}node; 
//node* head =(node*)malloc(sizeof(int));
int item ;

struct mnode{
 node* next ;
 int item;  
 int visit ;
};


void checkpalindrome(node* start ){
  node* ptr = start;
  node* end = reverselinkedlist(start);
  while(ptr!=NULL){
    if(ptr->data == end->data ){
     continue;
    }
    else{
      printf("Not a palindrome ");
      break ;
    }
  }
  printf("It is a palindrome ");
}

/*node* reverselinkedlist(node* start){
  node* new=NULL , * temp ;
 
  while(start){
  temp =(node*)malloc(sizeof(node));
  temp->data = start->data ;
  temp ->next = new ;
  new = temp ;
  start = start->next ; 
  }
  return new ; 
}*/

// more optimized reversealinkedlist 
node* reverselinkedlist(node* start){
  node *prev , *curr , *temp ; 
  curr = start->next  , prev = start ; 
  while(curr!=NULL){
  temp = curr->next ; 
  curr->next = prev ; 
  prev = curr ;  
  curr = temp ;
  }
  return prev ; 
}
node* circularlistintwo(node * start){
  
  node *fast = start, *slow = start ;
  if(!(start->next))NULL;
  while(1) {
    if(fast->next==start){
      fast->next = NULL ;
      break ;
    }
    if(fast->next->next==start){
      fast->next->next = NULL ;
    }
    fast = fast->next->next ;
    slow = slow->next ;
    }
    node* new = slow->next ;
    slow->next = NULL ; 
    return new ;

}

node* swap(node* start , int k){
    node  *temp , *save =start, *ptr = start->next; 
    int count = 2 ; 
    if(k==1){
      start = ptr ; 
      save -> next = start->next; 
      start ->next = save ;
      return start ;
    }
    while(count<=k && ptr!=NULL){
      save = ptr ; 
      ptr = ptr->next ; 
      count++;
    }
    temp = ptr -> next ; 
    save ->next = temp; 
    ptr -> next = temp ->next ;
    temp->next = ptr ; 
    return start;
}
/*node* swap(node* start , int k){
node * ptr = start -> next , * save = start;
 if(k==0){
    start = ptr ; 
    save->next = ptr ->next ; 
    ptr -> next = save ; }
   
for(int i = 1 ; i < k && ptr!=NULL ; i++ , save = ptr , ptr = ptr ->next){
}
save -> next = ptr->next ;  
    
   ptr -> next = (save -> next)->next ;
   (save -> next)->next= ptr ;   
return start ; 
}*/

// Floyds cycle finding algorithm
node* detectloop(node* start){
node* slow = start, *fast = start  ; 
if(start == NULL )return NULL ;
while(slow!=NULL && fast!=NULL){
  slow = slow->next ;
  fast = (fast->next)->next ; 
  if(slow == fast ){
  
    return slow ;   // this will be some point in the node 
  }
  
}
return NULL ; }// most eficient way of detecting a loop 
// we do not get the required node by an implementation of this cycle simply as we are not getting the original linked list 
/*
let us think of a loopy list with A being the distance between the header node and the first element of the loop and B being the distance between
the first element of the loop and the point where the fast and slow nodes meet 
and c be the length of the cycle 
let us assume that fast and slow met after 
fast went - A + xC + B 
slow went - 2*A + 2*yC +2*B
A + (2y - x)*C +  B = 0 
A + B = lC
hence  A + B = C ; 
A + B is the distance between fast and loop start 
we run fast from the current point to forth and slow from start 
both go A and this meet at the start 
*/
// another way is by creating a modified link list structure with a visited node 
// the same thing above done without modifying the linked list is the best approach I guess

node* getloopelement(node* start){
  node* fast = detectloop(start);   // that point in the node 
  if(fast==NULL)return NULL ;    // maybe that point will be null
  node* slow = start ; // start from start 
  while(fast!=slow){   // loop will terminate when fast == slow 
    fast = fast->next ; 
    slow = slow->next ; 
  }
 
  return fast ;    // fast = slow = loop hence returned 
  }

int getlength(node* start){
  node* fast = detectloop(start);
  node* slow = fast ; 
  int count = 0 ;
  while(1){
    
    fast = fast->next->next;
    slow = slow -> next ;
    count++;
    if(fast == slow )return count;
    
  }
  return count ;
}

void removedetectedloop(node* start){
  node* loop = getloopelement(start);
  if(loop==NULL)return ;
  node* ptr = loop ;
  while(ptr->next!=loop){
    ptr = ptr->next ; 
  }
  ptr->next = NULL ; 
  return ;
}
/*node* detectloop(node* start ){
node* temp =(node*)malloc(sizeof(node)), *ptr; 
while(start!=NULL){
  if(start->next==temp){
    return start;
  }
  if(start->next == NULL)
  return NULL: 
  ptr = start ;
  start = start->next ; 
  ptr -> next = temp ; 
  
}
return NULL ;
}*/

//Another way of detecting loop is by continuously calculating the length if current length < previous length means a loop is occured 




/*node* detectloop(node* start ){
 
  if(start==NULL){
  printf("Null List");
  return NULL; }

  node* temp , *ptr = start->next , *new = NULL ; 
  node* tmp; 
  temp = (node*)malloc(sizeof(node));
  temp->next = new ; 
  new = temp ;
  new->data = (int)start; 
  while(ptr!=NULL){
  tmp = new ; 
  while(tmp!=NULL){
  if(tmp->data == (int)ptr){
    printf("Loop Found");
    return ptr; 
  }
  tmp = tmp->next ; 
  ptr ;
  }
 temp = (node*)malloc(sizeof(node));
 temp->next = new ;
 temp->data = (int)ptr;
 ptr = ptr->next; 
 new = temp ; 
  }
printf("NO LOOPS IN THE LINKED LIST");
return NULL ;
  }*/

// node* insertbeg(node* start , int item ){ // Sir gave this function for creating nodes
// node* new = (node*)malloc(sizeof(node));
// strccpy(new->data,item);//new->data = item ;
// new->next = start ;
// start = new ;
// return start ;
// }
// // node* new = NULL;
// node* temp , *new; 

/*node* createlist(node* start){

 new = (node*)malloc(sizeof(node));//malloc is the allocation that we need to achieve 
printf("What is the data to be stored:"); 
scanf("%d" ,&item);
if(item<0){
free(new) ;
new = NULL;
return start;}
new->data = item ;
new->next = start ;
 // This is how one of the linked lists was created 
 // But now the issue is how the other lists will be created and then they be linked 


temp = createlist(new);
return temp;
}*/

node* createlist(node* start , int choice){
    node* new = (node*)malloc(sizeof(node)) , *temp;
    int item ; 
   // choice = 1 ;
    if(choice!=1){
      
      return start; 
    }
    printf("What is the data you want to be stored : ");
    //fflush(stdin);
    scanf("%d" ,&item);
    new->data = item ;
    new->next=start;
    printf("What is your choice : ");
    scanf("%d" ,&choice);
    temp = createlist(new , choice);
     return temp;
}

/*node* createlist(node* start){
// temp = new; 
new = NULL;
// (node*)malloc(sizeof(node));

printf("What is the data to be stored:"); // 
scanf("%d" ,&item);
if(item<0)return new ;
start->data = item ;
start->next = new ;
 // This is how one of the linked lists was created 
 // But now the issue is how the other lists will be created and then they be linked 
new = (node*)malloc(sizeof(node));
createlist(new);

}*/

// void insertat(node* start , int item , int index ){
// int temp = 1 ; 
// node* save , *link = start; 

// while(temp != index){
// if(link==NULL){
// printf("The index is not in this list ");
// return ;
// }
// save = link ; 
// link = link->next ;
// temp++; 
// }
// save->next =(node*)malloc(sizeof(node));
// save = save->next ;
// save->data = item ; 
// save->	next = link ;
// return ;
// }

// void insertinsortedlist(node* start , int item ){
// node* save , *link = start ;
// if(link == NULL){
// insertbeg(link , item);
// return  ;
// }
// while(item > link->data ){
// if(link == NULL){
// insertbeg(link , item);
// return ;
// }
// save = link ;
// link = link->next ;
// continue ; 
// }
// save->next =(node*)malloc(sizeof(node));
// save = save->next ;
// save->data = item ; 
// save->	next = link ;
// return ;

// }

// node* searching(node* start , int item){
// node* loc ;
// node* link = start ;
// while(item != link->data ){
// if(link == NULL){
// insertbeg(link , item);
// loc = link ;
// return link ;  ;
// }
// link = link->next ;
// continue ; 
// }
// loc = link ;
// return loc ;
// }

void traversing(node* start){
while(start != NULL ){
printf("%d --> " , start->data);
start = start -> next ;
}
}

void deletelast(node * start ){
if(start==NULL){
printf("Empty list\n");
return ; 
}
if(start->next == NULL ){
    printf("Single element list ");
    free(start);
}
node* ptr= start , *save = start ; 
while(ptr->next != NULL){
    save = ptr ;
    ptr = ptr->next ;
}
  save->next = NULL ;

  free(ptr);

return;
}

node* createcircularlist(node* start){
int choice=1;
node* new , *temp;

while(choice==1){
  new= (node*)malloc(sizeof(node));
  if(start == NULL){
    temp = new ; 
  }
  printf("What is the data that you want to be stored:");
  scanf("%d",&(new->data));
  new->next = start; 
  start = new ;
  printf("Input 1 if you want the linkedlist to be created further");
  scanf("%d",&choice); 
}
temp->next = start ; 
return start ;
}
void traversecircularlinkedlist(node* start){
  node* temp = start ; 
  printf("%d-->" ,start->data);
  start = start->next ; 
  while(start != temp){
  printf("%d-->" , start->data);
  start = start->next ;
  }
}




int main(void){


// int Info[]={12 , 13 , 16 , 18 , 20 , 25 , 42 , 34 , 90 , 42};
// int *start = Info+5 ;
// int *next[10] = {Info + 2 , Info + 0 , Info + 6 , Info + 4 , Info + 3 , Info + 8 , Info + 7 , Info + 1 , Info + 9 , 0 };
node* start = NULL ;
//node* new = NULL ; 
//deletelast(start);
//Circular link list 
/*node* new = detectloop(start);
printf("The element being looped : %d\n" , new -> data);
traversecircularlinkedlist(start);*/


//start = createlist(start,1);
start = createcircularlist(start);
struct node* new = circularlistintwo(start);
//Creating a loopy link list 
//(((start->next)->next)->next)->next = ((start->next)->next); // this will create a loopy link list 
//1 2 3 4 3 4 3 4 

//start = swap(start , 1);
//if(detectloop(start)!=NULL)printf("Loop exists");
// algorithm does work 
// printf("%d and length: %d",(getloopelement(start))->data , getlength(start));

// removedetectedloop(start);
traversing(start);
printf("Time for new \n");
traversing(new);
//node* link = start ;
// The value passed inside this start becomes null which is a headache for me 
// printf("%d\n");
// insertinsortedlist(link,20);
//traversing(start);
/*int* ptr = start ;
int count = 0 ;
while(ptr!=NULL){
printf("%d-->" , *ptr);
ptr = *(next + (ptr - Info));}*/

}

