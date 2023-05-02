#include <iostream>

using namespace std;

int sum(int a ,int b){
     int chutiya = a+b;
     return chutiya;
}

int main(void){
    int a;
    int b;
    cout<<"What are the values of a and b : ";
    cin>>a>>b;
    int c = sum(a,b);
    cout<<c;
}