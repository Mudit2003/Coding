#include<iostream>

int main(void){
    int length;
    int breadth;
    std::cout<<"What is the length and breadth of the rectangle: ";
    std::cin>>length>>breadth;
    for (int i = 0; i < length; i++)
    {
        std::cout<<"*";
        if (i==0 || i==length-1)
        {
            for (int j = 0; j < breadth-2; j++)
          {
            std::cout<<"*";
          }
        }
        else
        {
           for (int i = 0; i < breadth-2; i++)
           {
               std::cout<<" ";
           }
           
        }
       std::cout<<"*";
       printf("\n");
    }
    
    return 0;
}