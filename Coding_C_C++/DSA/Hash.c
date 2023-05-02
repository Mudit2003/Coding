#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

struct node{
  struct node* back ; 
  struct node* forth ; 
  int key;
};
struct hash{
  struct node* start ; 
  int count ; 
};

// contains the number of nodes contained by the linkedlist and the equivalent nodes 

struct node* insertEnd(struct node* start , int key){
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->key = key; 
    new->forth =NULL;
    if(!start){
        // start is null  
        new->back=NULL;
       // new->forth=NULL;
        return new ;// start = new ;
    }
    // start is not null that means the linked list is not empty
    struct node* ptr = start ; 
    while(ptr->forth!=NULL){
        ptr = ptr->forth;
    }
    // ptr->forth=null 
    // that means the ptr is pointing to the last element 
    new->back = ptr ; 
    ptr->forth=new;
    return start; 
}
struct node* find(struct node* start , int key){
    while(start!=NULL && start->key!=key)
    start = start->forth;
    if(start==NULL)return NULL;
    return start ; 
}
struct node* delete(struct node* start , int key){
if(!start)return NULL ; 
struct node* loc = find(start,key);
if(loc==start){
start =start->forth ; 
free(loc);
    return start ; 
}
struct node* save = loc->back;
struct node* succ = loc->forth;
succ->back = save  ;
save->forth = succ ; 
free(loc);
return start ; 
}
int hashcode(int key , int n){
    return key%n;
}
void insertHash(int value,int n,struct hash* hashtable ){
int key = hashcode(value,n);
hashtable[key].count+=1;
insertEnd(hashtable[key].start,value);
}
void createHashTable(struct hash* hashtable , int n ){
  hashtable = (struct hash*)calloc(n,sizeof(struct hash));
  
}
void arrToHashTable(struct hash* hashtable , int n , int* arr){
   if(n==0)return ; 
   createHashTable(hashtable,n);
   for (int i = 0; i < n; i++)
   {
    insertHash(arr[i],n,hashtable);
   }
   
}
int main(void){
   // int n=20;
    struct hash* hashtable=NULL;
    printf("%u\n",hashtable);
    int arr[]={1,2,3,4,5,6,7,8,9};
    arrToHashTable(hashtable,(sizeof(arr)/sizeof(int)),arr);
    printf("%u\n",hashtable);
    printf("%d\n",(hashtable[0].start)->key);
}