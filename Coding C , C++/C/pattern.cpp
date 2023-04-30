#include<iostream>

int main(void){
    char alpha='A';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           std::cout <<alpha;
           alpha++;
        }
        alpha++;
         std::cout << "\n";
    }
   
    
}