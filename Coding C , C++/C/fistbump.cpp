#include<iostream>

using namespace std;

int main(void){
    int length;
    cout<<"What is the length of stick :";
    cin>>length;
    int a,b;
    int count=0;
    int n=length/2;
    for (int i = 1; i <=n; i++)
    {
        a=i;
        b=n - i;
        if(a!= b && a+b==n && a!=0 && b!=0)
        {
            count++;
        }
    }
    cout<<count;
}