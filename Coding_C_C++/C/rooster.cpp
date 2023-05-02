#include<iostream>
#include<string>
#include<cstring>

int main(){

    std::string Hello{"Hello"};
    std::cout<<Hello.front();// return front 
    // what we got to know from here that std::string is a class(something like that ) and we are creating an object of the given class as we need
    //for using functions of class string we have to do it as we do in java object.function ; 
    //std::cout<<std::strchr(Hello , 3)<<std::endl;
    //none of the cstring functions work on std::strings 
}