#include<iostream>

int main()
{
    int accounts[][7]= {{3,4,5,6,7,8,9},{4,2,8,9,11,2,5},{8,11,12,3,4,6,8}};
   // std::cout<<std::size(accounts)<<std::endl;
    
    int sum[]{0,0,0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            sum[i]+=accounts[i][j];
        }
        
    }
    if(sum[0]>sum[1] && sum[0]>sum[2]){
        std::cout<<"Max wealth is : "<<sum[0];
    }
    if(sum[1]>sum[0] && sum[1]>sum[2]){
        std::cout<<"Max wealth is : "<<sum[1];
    }
    else{
    std::cout<<"Max wealth is : "<<sum[2];
    }
    return 0;
}
