#include<iostream>
int d =100;
int main(){
// Defining a lambda function 
/* [Capture_List](Arguments)->return_type{
    //Function body here
};*/
// return type is not always required as the compiler can deduce it automatically 

[](){
std::cout<<"Hello , Hello hai floor pe jab too ayi "<<std::endl;
};
// This code compiles well itself but the function could not be called this way 
auto function = [](){
std::cout<<"Hello , Hello hai floor pe jab too ayi "<<std::endl;
};
function();// the lambda function could be called this way and the existence of previous defination did not deter it at all 

// Another way of calling this funcion is by putting this bracket in fron of the curly brace , think of it like defining a structure variable by putiing it in front of it 
[](){
std::cout<<"Hello , Hello hai floor pe jab too ayi "<<std::endl;
}();

//Creating another lambda function 
// this one is going to be kinda more sophesticated one 
//this will have a return 
auto value = [](double a , double b){
    return a+b;
}(1,1.2);
std::cout<<"The sum is : "<<value<<std::endl;

// A way of directly printing the output 
std::cout<<[](double a , double b){
    return a+b;
}(1,1.2)<<std::endl;

// A way of exclipicitly declaring the return type 
// here we typecasted double to int 
std::cout<<[](double a , double b)->int{
    return a+b;
}(1,1.2)<<std::endl;
 
// []()->return_type{}
// [] - capture list - decides how many of the elements outside the scope of lambda function could be used inside the lambda fucntion 
// ()-parameter list 
// {}-function body 
int a{7},b{9};

auto sumThree=[=](int c)->double{
    std::cout<<a+b+d<<std::endl; 
    return a+b+c;
};
int c=sumThree(11);

// Include all [=] all included in capture list by valye 
// [&] everything local and global can be used by the lambda fucntion by reference 


}

// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int fact(int);

// int main()
// {
//     printf("%d",fact(5));
//     return 0;
// }

// int fact(int num)
// {
//     int f=1;

//     if(num==1)
//         return f;

//     f=f*fact(num--);

//     return f;

// }