#include <iostream>
#include <bitset>

int main(){
    int data{15};
    std::cout<<"Data(binary) : "<<std::showbase<<std::bitset<16>(data)<<std::endl; 
    std::cout<<"Data(octal) :  "<<std::showbase<<std::oct<<data<<std::endl; 
}
