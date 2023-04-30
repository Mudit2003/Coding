#include<iostream>

int main(){
    int n;
    std::cout<<"What is the length of the array";
    std::cin>>n;
    int index[n];
    int num[n];
    for (int i = 0; i < n; i++)
    {
        std::cout<<"What is the value of element "<<i<<" of the index";
        std::cin>>index[i];
        std::cout<<"What is the value of element "<<i<<" of the num";
        std::cin>>num[i];
    }
    int target[n];
    for (int i = 0; i < n; i++)
    {
         target[index[i]]=num[i];
    }
    for (auto &&i : target)
    {
       std::cout<<i<<std::endl;
    }
    
}