#include<iostream>

int main(){
    /*
    int* pointer{}; //initialized to null ptr
    //we can do it another way by 
    int* pointer{nullptr};
    //size of any pointer depends on system in mine it is eight although int pointer, double pointer are all distinct data type 

    int* pointed , other_int_var;
    int *point ,other_int;
    // in both cases only the first term is a pointer while second is of normal int datatype 
    */
  /* int variable{48};
   int* pointer{&variable}; // pointer contains address of a variable 

   std::cout<<"The variable is stored at the address "<<pointer<<std::endl; 
    // Dereferencing is reading something and editing it through the pointer 
    std::cout<<"The value of variable stored at the pointer is : "<<*pointer<<std::endl;
    */

    //pointer to char - may even be turned into a string 
    
   /* const char* message{"Hello World !"};
    std::cout<<*message<<std::endl; */
// Don't try to work with a pointer that you didn't initialize and don't try to work with a pointer that was initialized to zero indicating it to be a null ptr .
// int pointer{};
// *pointer = 36;
// int* point{} ;
//  int poi = 36;
//  point=&poi;
// There is some error occuring when using curly braced assignment 
//std::cout<<"The value stored at pointer is : "<<*pointer<<std::endl;
// std::cout<<"The value stored at pointer is : "<<*point<<std::endl;

// stack stores the local variable heap is the extra memory that can be queried when space is not left , lifetime of any variable or operator can be controlled in heap that is the developer is in full control 
//Dynamic Memory allocation 

// int* pointer{nullptr};
// pointer = new int; // taking some heap memory 

// *pointer = 4;

// std::cout<<"The value stored at pointer is : "<<*pointer<<std::endl;
// Wait a second ........... 

// // pointer{nullptr}; again that same braced assignment problem 
// delete pointer; //releasing the memory 
// pointer = nullptr; // resetting so we don't end up using a deleted section of memory in future 

// std::cout<<"The pointer is "<<pointer<<std::endl;

// these bad cases of pointers create dangling pointers 

//check for null ptr by using if else statement 

/*if (pointer != nullptr){
  std::cout<<"The value of pointer is : "<<pointer<<std::endl;
}
else{
  std::cout<<"Invalid address"<<std::endl;
} */

// There is a very rare chance that the new operator we used might fail , in that case we have two ways two handle that problem
//First way is to use the exception handling mechanism built in c++ 

// int *pointer{new int[1000000000000000000]};

//this is the try and catch method for handling exceptions , the problem code is put in try and the catch block is to let us know if some exception has occured 
// program will end well now , ex.what() will tell you what kind of exception or problem you faced 
/*for(int i=0 ; i<1000000000000000000;i++){
  try {
    int* lot_of_ints{new int[10000000]};
  }
  catch(std::exception& ex) {
    std::cout<<"Caught exception ourselves "<<ex.what()<<std::endl;
    
  }
}

std::cout<<"Program ends well "<<std::endl; // the loop was too big so program crashed , will suggest going further is a smaller loop 
*/


  // std::nothrow - Ideal if you don't want exceptions thrown when new fails , initializes each of the pointers to zero  
  // for(int i=0 ; i<1000000000000000000;i++){
  //   int* lots_of_int2{new(std::nothrow) int [100000000]}; 
  // A null pointer is assigned when data allocation fails instead of throwing off or crashing 

  //   if(lots_of_int2==nullptr){
  //     std::cout<<"Memory allocation failed "<<std::endl;
  //   }
  //   else{
  //     std::cout<<"Memory allocation succeeded "<<std::endl;
  //   }
  // }

// Null Pointer Safety

/*int *pointer_6{};
pointer_6=new int(7);
if ((pointer_6))
{
  std::cout<<"Pointer contains a valid address : "<<pointer_6<<" And a valid value that is "<<*pointer_6<<std::endl;
}
else
{
  std::cout<<"Fuck it is a null pointer";
}

delete pointer_6;
pointer_6=nullptr;

std::cout<<"The new value of pointer is : "<<pointer_6; */

// It is safe to call delete on a null pointer 

// Memory Leaks - When you lose access to a memory allocated on heap 

// int * pointer = new int(21);
// int number = 27 ;
// pointer = &number ; // Now the memory allocated on heap is no longer usable 

// *pointer = new int(32); // This is another method of rendering memory useless 

// // Allocating memory inside a nested scope as a local variable 

/*
{
  int *pointer_7{new int(55)};
} // Can not be used after this scope ends 


// Dynamically allocated arrays 
int *pscores{new(std::nothrow) int[1000]};
if(pscores){
for (int i = 0; i < 1000; i++)
{
  std::cout<<"The value of element at index "<<i<<" is "<< pscores[i] << "or" << *(pscores + i)<<std::endl;
}
}

delete[] pscores;
pscores = nullptr;
*/

//Pointers initialized with dyanamically allocated arrays and normal arrays are different , std::size does not work on them and so does not range based for loop 
// Thus dynamically located array is decayed into pointer 

char s[6]= "Sagar";
printf("%c" , *s); 
}