#include<iostream>

int main(){
    int n;
    std::cout<<"What is the term that you want to find fibbonacci sequence of:";
    std::cin>>n;

    int current_term;
    int prev_term=1;
    int prev_prev_term=0;
    if (n==0|| n==1)
    {
        std::cout<<"The fibbonaci of "<<n<<" is "<<n;
    }
    
    for (int i = 2; i < n; i++)
    {
        
        
        current_term=prev_term+prev_prev_term;
        prev_prev_term=prev_term;
        prev_term=current_term;
        
    }
    std::cout<<"The fibbonaci of "<<n<<" is "<<current_term;
    



}