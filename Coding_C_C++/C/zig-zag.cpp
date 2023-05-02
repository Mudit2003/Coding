#include<iostream>

int main(void){
    int n;
    std::cout<<"What is the number of stars you want :";
    std::cin>>n;
    for (int i = 1; i <=3; i++)
    {
       for (int j = 1; j<= n; j++)
       {
           if ((i+j)%4==0 || (i==2 && j%4==0))
           {
               std::cout<<"*";
           }
           else
           {
               std::cout<<" ";
           }
           
       }
       
       std::cout<<std::endl;         
    }
    
    return 0;
}