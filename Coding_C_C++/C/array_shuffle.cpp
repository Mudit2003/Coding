#include<iostream>

int main(){
    int Array[]{0,1,2,3,4,5,6,7,8,9};
    auto a=std::size(Array);
    int x[a],y[a];
    
for (int i =0;i < a/2; i++)
{
    x[i]=Array[i];
    y[i]=Array[i+a/2];
}

int Arr[a];
for (int j= 0;j < a; j=j+2)
{
     Arr[j]=x[j/2];
     Arr[j+1]=y[j/2];
}
for(auto value:x){
    std::cout<<value<<std::endl;
}
std::cout << "now it is y" << std::endl;
for (auto value:y){
   std::cout<<value<<std::endl;
}
std::cout<<"Now print array"<<std::endl;
for(auto value:Arr){
    std::cout<<value<<std::endl;
}



std::cout <<"{";
for (int j = 0; j < (std::size(Array)); j++)
{
    if(j!=(std::size(Array)-1))
    std::cout<<Array[j]<<",";
    else
    std::cout<<Array[j];

}
std::cout<<"}";
}