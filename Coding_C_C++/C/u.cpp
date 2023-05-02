#include<bits/stdc++.h>

using namespace std;
int main(){
    int a;
    cout<<"Enter the marks\n";
    cin>>a;
    if(a<25){
        cout<<"F"<<endl;
    }
    else if(a>=25 && a<45){
        cout<<"E"<<endl;
    }
    else if(a>=45 && a<50){
        cout<<"D"<<endl;
    }
    else if(a>=50 && a<60){
        cout<<"C"<<endl;
    }
    else if(a>=60 && a<80){
        cout<<"B"<<endl;
    }
    else if(a>=80 && a<100){
        cout<<"A"<<endl;
    }
    else{
        cout<<"invalid marks"<<endl;
    }
    return 0;
}