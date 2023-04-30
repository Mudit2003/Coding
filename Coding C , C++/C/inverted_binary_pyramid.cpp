#include<iostream>

int main(void)
{
    int n;
    std::cout<<"What is the value of n:";
    std::cin>>n;
    int count =n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1 ; j<=i; j++)
        {
            if(j%2==i%2)
            std::cout<<0;
            else
            std::cout<<1;
        }
        
        std::cout << std::endl;
    }

    // We can do this same question by another method by putting if i+j%2==0 , print one 
    

    
    return 0;
}
