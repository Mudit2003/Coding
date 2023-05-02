#include<iostream>

int main()
{
    /*
    int variable{66};
    int& reference{variable};// You have to initalize and assign the reference on the same line 
    
    std::cout<<"The address of the variable is : "<<&variable<<" and it's value is "<<variable<<std::endl;
    std::cout << "The address of the reference is : " <<&reference<<" and the value of the reference is"<<reference<< std::endl;
    
    // Modifying the variable will have the same effect on reference 
     */
    // Differences between Pointers and references 
    //References are somewhat like const pointers as const pointers cannot be made to point someone else
     
     int*pointer;//can work with an unassigned value at initialization 
     int variable{33};
     pointer=&variable;// Braced assignment second time does give segmentation error 
     int& reference{variable};
     int new_variable{66};

    std::cout<<"The address of the variable is : "<<&variable<<" and it's value is "<<variable<<std::endl;
    std::cout<<"The address of the reference is : "<<&reference<<" and the value of the reference is "<<reference<< std::endl;
    std::cout<<"The address of the pointer is : "<<pointer<<" and the value is "<<*pointer<<std::endl;
 
    std::cout<<"================================"<<std::endl;
    // // Now let's try and modify stuff 
    // reference=new_variable;
    // pointer=&new_variable;

    // std::cout<<"The address of the variable is : "<<&variable<<" and it's value is "<<variable<<std::endl;
    // std::cout<<"The address of the reference is : "<<&reference<<" and the value of the reference is "<<reference<< std::endl;
    // std::cout<<"The address of the pointer is : "<<pointer<<" and the value is "<<*pointer<<std::endl;

    // When I change the reference it affects the variable too while the same cannot be said for pointer
    // References are similar to const pointer 

    // The references can also be of type const and non const , the type we just used was non const type where we can modify the variable through references

    const int &reference_1{new_variable};// Now you cannot modify the variable through reference 
    // This same thing could be achieved through a const pointer too 
    const int* const pointer_1{&new_variable}; // This is a const const pointer  
    // This const variable has nothing to do with the original variable , it can be anything constant or variable 

    




    return 0;
}
