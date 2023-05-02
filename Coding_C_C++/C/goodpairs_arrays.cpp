#include<iostream>

int main(){
    int n;
    std::cout<<"What would be length of the array:";
    std::cin>>n;
    int Array[n];
    for (int i = 0; i < n; i++)
    {
        std::cout<<"What is the value of the element "<<i<<" of the array:";
        std::cin>>Array[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Array[i]==Array[j] && i<j)
            {
                count++;
            }
            
            
        }
        
    }
    std::cout<<"The number of good pairs in the array is "<<count;
    
}