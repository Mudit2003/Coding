#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==n){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not an Armstrong";
    }
    return 0;
}
