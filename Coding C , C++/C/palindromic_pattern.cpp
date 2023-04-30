#include<iostream>

int main(void){
    int n;
    std::cout<<"What is the largest number you want as output :";
    std::cin>>n;
for (int i = n; i >= 1; i--)
{
    for (int j = 1; j <= n-i; j++)
    {
        std::cout << " " ;
    }
    for (int k = i; k>=1 ; k--)
    {
        std::cout<<k;
    }
    for (int l = 2; l <= i; l++)
    {
        std::cout<<l;
    }
    
    std::cout << std::endl;
}

    
}