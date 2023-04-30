#include<iostream>

using namespace std;

int main(void){
    int A[100] ;
    int n;
    cout<<"What is the size of this array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"What is the value of element "<<i+1<<":";
        cin>>A[i];
    }
     int sum=1;
    for (int i = 0; i < n; i++)
    {
        sum*=A[i];
    }
    cout<<sum;
}