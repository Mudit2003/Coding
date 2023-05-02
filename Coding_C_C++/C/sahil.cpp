#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, remainder, result;
    cout<<"Enter a three digit integer : ";
    cin>>n;
     
    while(n != 0){
        remainder = n%10;
        result += remainder*remainder*remainder;
        n /= 10;
    }
    if(result == n){
        cout<< n <<" is an armstrong number ";
    }
    else{
        cout<< n <<" is not an armstrong number ";
    }
    return 0;
}