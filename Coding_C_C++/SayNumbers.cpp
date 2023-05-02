#include<iostream>

using namespace std;

// saying numbers in ascending order is the task that we are assigned 
// let us think recursively 
// first thing is using recursion to reach the end of the program 
// there should be some variable in the scope to have that value 
// 12758 
// first call 
// temp = 8 ; 
// 1275
// 5 
// 127 
// 7
//12
//2
//1
//1
//0--- there should the function terminate 
// at the time of return print all those value desired of you 
int saynumber(int n){
    if(n==0)return 0 ;
    int temp = n%10 ; 
    saynumber(n/10);
    std::cout<<temp<<std::endl; 
    return 1 ; 
}
int main(){
   saynumber(12758);
}