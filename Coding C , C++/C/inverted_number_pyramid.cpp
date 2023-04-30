#include<iostream>

int main(void)
{
    int n;
    std::cout<<"What is the value of n:";
    std::cin>>n;
    int count =n;

    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k<=n-i ; k++)
        {
            std::cout<<" ";        
        }                            
        
        for (int j = 1 ; j<=i; j++)
        {
            std::cout<<j;    
        }
        
        std::cout << std::endl;
    }
    

    
    return 0;
}
