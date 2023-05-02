#include <iostream>
#include <string>

int main(){
   
    // std::string items[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < count; j++)
    //     {
    //         items[i][j]=type
    //     }
        
    // }
    typedef struct items;
    {
        std::string type[3];
        std::string color[3];
        std::string name[3];

    }items;
    std::string ruleKey,ruleValue;
    ruleKey;
    std::cout<<"What is the rule key : answer in type , colour , name"<<std::endl;
    std::cin>>ruleKey;
    ruleValue;
    std::cout<<"What is the rule value :";
    std::cin<<ruleValue;

    for (int i = 0; i < 3; i++)
    {
        std::cout<<"What are the type , color , name of item "<<i+1<< ":";
        std::cin>>items.type[i]>>items.color[i]>>items.name[i];
    }
    int count{0};
    for (int i = 0; i < 3; i++)
    {
        if (ruleKey=="type")
        {
            if(ruleValue==item.type[i]){
                count++;

            }

        }
        if (ruleKey=="color")
        {
            if(ruleValue==item.color[i]){
                count++;

            }
        }
        if (ruleKey=="name")
        {
            if(ruleValue==item.name[i])
                count++;

            }
        }
       
        
    }
    std::cout<<std::endl;
    std::cout<<count;
    

    


    
    
    
    
}