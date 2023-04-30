#include<iostream>

using namespace std;

int main() {
    int year;
    cout<<"Which year it is:";
    cin>>year;
    if (year>1000 && year%100==0)
    {
        if (year%400==0)
        {
            cout<<"leap year";
        }
        
    }
    else if (year%4==0)
    {
        cout<<"leap year";
    }
    else
    cout<<"Ghanta leap year nahi hai.";
    return 0;
}
