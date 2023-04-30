#include<iostream>

int main(void){
    int pyramid;
    std::cout << "What is the value of pyramid : " << std::endl;
    std::cin>>pyramid;
   
    for (int i = 0; i < pyramid; i++)
    {
        for (int j = 0; j < (pyramid-i); j++)
        {
            std::cout<<" ";
        }
        for (int k = 0; k < 2*i + 1; k++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
        
    }
    
}