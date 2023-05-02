#include<iostream>

int main(){
    int length;
    std::cout<<"What is the length of the array : "<<std::endl;
    std::cin>>length;
    int Array[length];
    int rev[length];
    int i{0};

    for (auto &&value :Array)
    {
        std::cout<<"What is the value of element "<<i<<" of the array ";
        std::cin>>value;
        i++;
        

    }

    for (auto &&value : Array)
    {
        rev[i]=value;
        i--;
        std::cout>>value>>",";
    }
    
    
    
     
    


}