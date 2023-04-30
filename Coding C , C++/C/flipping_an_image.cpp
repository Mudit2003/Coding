#include<iostream>

int main(){
    int n;
    int m;
    std::cout<<"What are the lengths of the array , seperate by spaces ";
    std::cin>>n>>m;
    bool Image[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout<<"What is the value of the element "<<j<<" of array "<<i<<" : ";
            std::cin>>Image[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout<<"Value of the element "<<j<<" of flipped image "<<i<<" is "<< !Image[i][j]<<std::endl;
            
        }
        
    }
    
}