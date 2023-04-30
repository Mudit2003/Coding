#include<bits/stdc++.h>

using namespace std;

int main(void) {
    int items[9];
    int quantity[9];
    int number_of_items;
    cout<<"What is the total number of items :";
    cin>>number_of_items;
    int total_price=0;
    for (int i = 0; i < number_of_items; i++)
    {
        cout<<"Cost of item "<<i+1<<":";
        cin>>items[i];
        cout<<"Quantity of item "<<i+1<<":";
        cin>>quantity[i];
        int price=items[i]*quantity[i];
        total_price+=price;
        
        
    }
    
    if (total_price<=1000)
    {
        cout<<"Total expenditure is "<<total_price;
    }
    else
    {
        cout<<"Total expenditure is "<<total_price+ total_price/10<<endl<<"Congrats discount mila hai";

    }
    return 0;
    

}