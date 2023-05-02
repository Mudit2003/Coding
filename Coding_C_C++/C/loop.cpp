#include<iostream>

using namespace std;
 
int main(void)
{
    int n;
    cout<<"What is the number 7:";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Mudit is great"<<endl;

        for (int j = 0; j <= i; j++)
        {
            cout<<"Yuvraj looks good";
            break;
            
        }
        
        cout<<"Mudit is so cool"<<endl;
    }
    
}