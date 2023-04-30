#include<iostream>


class Solution{
public:
int count=0 ; 
    int steppingNumbers(int n, int m)
    {
    int temp = n , c=0 ; 
    while(temp/10!=0){
    if(abs(temp%10 - (temp/10)%10)!=1)
    break ; 
    temp /=10; 
    }
    if(temp/10==0)
    c++;
    if(m==n){
    if(c>0)
    return ++count ;
    else 
    return count ; 
    }
    steppingNumbers(n+1,m);
    if(c>0) 
    return ++count;
    else 
    return count ; 
    }

};

int main(){
Solution s ;
std::cout<<s.steppingNumbers(22,35);

}