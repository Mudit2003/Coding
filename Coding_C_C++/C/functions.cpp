#include<iostream>

// #include "comparisons.h"

int new_age(int& age); // Pass by reference 

std::string concatenation(std::string input_1 , std::string input_2){
    std::string result = input_1 + input_2;
    std::cout << &result << std::endl;
    return result;

}

int main(){
    /* return_type function_name(input type input , ...){
         Operations;
         return variable;
    }*/
    // For a void function return only written is a valid syntax 
    // Beware of implicit conversions in your function 
// int a{7};
// int b{9};
// std::cout<<max(a,b)<<std::endl;

// There are three ways of passing a value into a fuction
// int x{23};
// std::cout <<"My new age is : " <<new_age(x) << std::endl; 
// std::cout<<x;

// Now we will talk about the ways of getting output out of a function

std::string result = concatenation("Mudit"," is great");
std::cout << result << " at the memory address " << &result << std::endl;
// Pass by reference , pass by value , pass by pointer 

// Function overloading 
// Same name different function
//Differenitated by the passed parameters 



}

int new_age(int& age){
    ++age;
    return age;
}

