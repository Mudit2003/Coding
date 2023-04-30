#include <iostream>

int main(){
     int n; 
     std::cout<<"What is the length of the array:";
     std::cin>>n;
     int Array[n];
     for (int i = 0; i < n; i++)
     {
         std::cout<<"What is the value of element "<<i<<"of the array";
         std::cin>>Array[i];
     }
     int conc[2*n];
     
     for(int j=0;j<2*n;j++){
         
         if (j<n)
         {
             conc[j]=Array[j];
         }
         else
         {
             conc[j]=Array[j-n];
         }
         
         std::cout<<"The value of element "<<j<<" is"<<conc[j]<<std::endl;
     }

    
    return 0;
}