#include<iostream>
#include<stdio.h>
// using namespace std;

int main(int argc, char const *argv[])
{
    int rows; 
    std::cout<<"What is the number of rows : ";
    std::cin>>rows;

    int k{1};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            //std::cout<<k++<<"\t";  
            printf("%3d",k++);
                  
        }
        std::cout<<std::endl;
    }
    
    return 0;
}


// 1 i=0 , j=0  i+j+1   ;    row - 4 
//    23 i=1 , j=0 , 1    i+j+1    , row -3 , row -2 
//    456 , i =2 , j=0 , 1 , 2     i+j+2 , i+j+2 , i+j+2 , row -2 , row -1  , row - 0 
//    78910 , i= 3 , j=0 , 1 , 2 ,3    i+j+4 
/* 1        i =1
2 3         i =
4 5 6        3 
7 8 9 10 */