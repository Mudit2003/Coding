#include<stdio.h>
#include<string.h>

// Structures can hold dissimilar data , arrays etc hold similar data type 
    //Syntax : 
    struct employee {
        int code ; 
        float salary ; 
        char name[10];
    } ;

    // passing a structure to a function 
    struct employee function (struct employee variable);
 
 // syntax of using typdef 
 
 typedef struct employed {
    int data ; 
    float money ; 
    char alias ;
 } emp ;
 //typedef is used to create an alias , most comonly used with structure 
 
int main(void){
    
//   struct employee e1; 
//   e1.code = 100 ; 
//   e1.salary = 34.454; 
//   strcpy(e1.name , "Harry");
//   printf("%s" , e1.name);

// What if you want user input 
/*
struct employee e1 , e2, e3 , e4;
printf("What is the code of e1 : ");
scanf("%d" ,&e1.code);
printf("What is the salary  of e1 : "); 
scanf("%f" ,&e1.salary);
printf("What is the name of e1 : ");
scanf("%s" ,e1.name);
printf("What is the code of e2 : ");
scanf("%d" ,&e2.code);
printf("What is the salary  of e2 : "); 
scanf("%f" ,&e2.salary);
printf("What is the name of e2 : ");
scanf("%s" ,e2.name);
printf("What is the code of e3 : ");
scanf("%d" ,&e3.code);
printf("What is the salary  of e3 : "); 
scanf("%f" ,&e3.salary);
printf("What is the name of e3 : ");
scanf("%s" ,e3.name);
printf("What is the code of e4 : ");
scanf("%d" ,&e4.code);
printf("What is the salary  of e4 : "); 
scanf("%f" ,&e4.salary);
printf("What is the name of e4 : ");
scanf("%s" ,e4.name);  */
// .operator is also known as member operator 

// Array of structures  - had there been more than four employees we would have refrained from making as many variables 
struct employee facebook[100];// Stores all 100 employees in facebook 

// Other methods of struct initialization 
struct employee harry = {100 , 71.28 , "Harry"};
struct employee shubh = {0};//all elements set to zero 

// Pointer to a structure ; 
struct employee e5; 
struct employee *ptr; 
ptr = &e5;
(*ptr).code = 101 ;
ptr ++; // Now the pointer would move to the other structure incrementing the total memory stored for struct employee 


printf("%d\n" , e5.code);
printf("%f\n" , e5.salary);

ptr -> code = 101 ; // same as (*ptr).code = 101 ; 

struct employee e6 = function(e5); // Note - structure is not updated by reference the copy of value goes into functino
printf("%d\n" , e6.code);
printf("%d\n" , (*ptr).code);
 // using typdef structure - avoiding the hassle of writing that struct employeed e10 
 emp e10; 
e10.data  = 7 ;



return 0;
}

struct employee function (struct employee variable){
      return variable;
}