#include<iostream>

using namespace std;

int main(void)
{
    int number,thousands,hundreds,tens,ones;
    cout<<"Enter the four digit number you want to reverse:";
    cin>>number;
    ones=(number%10);
    tens=(number%100-ones)/10;
    hundreds=(number%1000-10*tens-ones)/100;
    thousands=number/1000;

    cout<<ones<<tens<<hundreds<<thousands;
    
    
    
  



}