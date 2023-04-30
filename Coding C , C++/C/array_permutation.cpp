#include <iostream>

int main()
{
    // int num[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     std::cout<<"What is the value of element "<<i<<" of array";
    //     std::cin>>num[i];
    // }

const int num[] ={1,3,5,4,0,2};
    int ans[]{num[num[0]],num[num[1]],num[num[2]],num[num[3]],num[num[4]],num[num[5]]};
    //{3,4,}
   
    for (int i = 0; i < 6; i++)
    {
        std::cout<<"Element "<<i<<" is "<<ans[i]<<std::endl;
    }
     return 0;
}
