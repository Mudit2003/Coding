#include<iostream>
#include <ios>
//result is the array of bool values depicting if after adding the extra_candy value the candy value of that kid would be maximum among all or not 
int main(){
    int kids;
    std::cout<<"How many kids are there :";
    std::cin>>kids;
    int candies[kids]; //the number of candies each kid has 
    for (int i = 0; i < kids; i++)
    {
        std::cout<<"What is the number of candies kid "<<i+1<<"has :";
        std::cin>>candies[i];
    }
    bool result[kids];
    int extra_candies;
    std::cout<<"What is the number of extra candies we are left with :";
    std::cin>>extra_candies;
    // for(auto value:result){
    //     value=true;
    // }
    for(int i=0;i<kids;i++){
        result[i]=true;
    }
    std::cout<<"Printing the truth values "<<std::endl;
    for(auto value:result){
        std::cout<<std::boolalpha<<value<<std::endl;
    }
    for (int i = 0; i < kids; i++)
    {
        candies[i]+=extra_candies;

        for (int j = 0; j < kids; j++)
        {
            
            if (candies[i]>=candies[j])
            {
                result[i]&=true;
            }
            else{
                result[i]&=false;
            }
        }
    }
        std::cout <<"{";
for (int j = 0; j < kids; j++)
{
    if(j!=kids-1)
    std::cout<<std::boolalpha<<result[j]<<",";
    else
    std::cout<<std::boolalpha<<result[j];

}
std::cout<<"}";
        
    }
    
    

