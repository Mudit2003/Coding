#include<iostream>

int main()
{
   int n;
   std::cout<<"What is the side of the rhombus";
   std::cin>>n;
   for (int i = 1; i <= n; i++)
   {
       for (int k = n-i ; k>=1; k--)
       {
           std::cout<<" ";
       }
       
       for (int j = 1; j <= n; j++)
       {
           std::cout<<"*";
       }
       std::cout<<std::endl;
   }
   
    return 0;
}
