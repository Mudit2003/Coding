#include <stdio.h>   
#include <stdlib.h>  
typedef struct linked_list{
int data; 
struct linked_list* next ;
} sllnode ;
//sllnode* head = (sllnode *) malloc(sizeof(sllnode));// function to create a singly linked list of the type 


//sllnode* createSinglyLinkedList(sllnode* b);
sllnode* create_singly_linked_list(sllnode *link ){
  sllnode *ptr=link; // points to link 

  printf("Enter the data: ");
  scanf("%d",&ptr->data);

  ptr->next=(sllnode *)malloc(sizeof(sllnode));// *link.next or *ptr.next 

  if(ptr->data <0){
    ptr -> next = NULL ;
    }
else
    create_singly_linked_list(ptr->next);

    return ptr;
  
}

void insertelement(sllnode* link , int item , int index ){
    int temp = 0 ;
    sllnode* temporary ;
    while(temp<index){
        // if(temp == index - 1 ){
        // temporary = link ;
        // link = link -> next ; 
        // break ;}
        temporary=link ;  
   
        link = link -> next ;

        temp ++ ; 
        
    }
    sllnode insert = {item , link};
    printf("%u\n" ,&insert);
    temporary->next = &insert ;
  
}

void searching_linked_list(sllnode* link , int value ){
   sllnode* ptr = link ; 
   
   int index = 0 ;
   while (ptr->data != value)
   {

       ptr = ptr->next;
       index++;

       if(index > 100 ){
        printf("Oops element was not there I guess , try again with another element ");
        return ;
       }
   }
   printf("The desired element was found at index %d" , index);
   return ;
}

void insert_linked_list(sllnode* inserted , sllnode* original , int index ){
  int temp = 0 ;
  sllnode* save ; 
  if(original == NULL){
     original = inserted ;
  }
  while (temp < index ){
   
    save = original ;
    original = original -> next ;
    if(save == NULL){
        printf("Maybe we have passed the bounds of the list : Error ");
        return ;
    }
    temp ++ ;
    
  }
  save -> next = inserted ;
   
  while (save -> next != NULL){
   save = save->next ; 
  }
  save ->next = original ; 
  
}

void inserting_to_sorted_list(sllnode* list , int item  ){
    sllnode * save ; 
    if(list==NULL){
    list = (sllnode*)malloc(sizeof(sllnode));
    list->data = item ;
    list->next = NULL; 
    
    }
    list ;
    sllnode insert = {item , NULL };

    while(list!=NULL){
        if(item > list->data){
            save = list ;
            list = list->next;
            continue ;
        }
        else{
            //  if(){
            //     save = &insert ;
            //  }
             save -> next = &insert ;
             insert.next = list ;
        } 

    }
    
}

int main(void){
    sllnode *head=(sllnode *)malloc(sizeof(sllnode));
    printf("Enter -1 to terminate:\n");
    sllnode *list=create_singly_linked_list(head);
  // int p = list ; 
 /*  while (1){
    if(list->next != NULL ){
      
    list = list->next ;
    }
        else{
        list = NULL ; 
        break ; 
    }
    }   

    
 sllnode* ptr = (sllnode*)p;*/
// Inserting a new list this time 
/*
sllnode* head_new = (sllnode*)malloc(sizeof(sllnode));
sllnode *list_2 = create_singly_linked_list(head_new);

//now we have to insert this list_2 in list that we created early on 
// for that we plan to use a function

// insert_linked_list(list_2 , list , 6)
; // both -1 are there at thee very end the reason being the end of one being the end of other */
inserting_to_sorted_list(list , 7);
    
while(list!=NULL){
    printf("%d-->" ,list->data);
    list = list->next ;
}
    
    
//searching_linked_list(head , 6);

return 0 ; 
}
// sllnode Final_element = { 7 , NULL};
