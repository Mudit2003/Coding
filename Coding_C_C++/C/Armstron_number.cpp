#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"What is the number that you'll like to check :";
    cin>>n;
    int count=1;
    while (n/10!=10)
    {
        n/=10;
        count++;
    }
    cout << count;
    
    return 0;
}
