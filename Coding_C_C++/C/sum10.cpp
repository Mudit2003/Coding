#include <iostream>

using namespace std;

int main(){
    int n;

    cout<<"What is the natural number n:";
    cin>>n;
    int sum=0;
    int i=1;
    while ( i<=n)
    {
        sum+=i;
        i++;
        
    }
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
    

    
    
    return 0;
}