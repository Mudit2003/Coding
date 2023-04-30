#include<iostream>

int main(void)
{
    int n;
    std::cout<<"What is the value of n:";
    std::cin>>n;
    int count =n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1 ; j<=i; j++)
        {
            if(j%2==1)
            std::cout<<0;
            else
            std::cout <<1;
        }
        
        std::cout << std::endl;
    }
    

    
    return 0;
}
