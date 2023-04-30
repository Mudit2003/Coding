#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cout<<"What is the number of rows you want : ";
    cin>>n;      
      for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <(n-i)-1; k++)
        {
          cout<<" ";
        }
        
        for (int j = 0; j < 2*i+1 ; j++)
        {
            cout<<"*";
        }
     cout<<endl;   
    }

     for (int i = n; i>0; i--)
    {
        for (int k = 0; k <(n-i)-1; k++)
        {
          cout<<" ";
        }
        
        for (int j = 0; j < 2*i+1 ; j++)
        {
            cout<<"*";
        }
     cout<<endl;   
    }
    
    return 0;
}
