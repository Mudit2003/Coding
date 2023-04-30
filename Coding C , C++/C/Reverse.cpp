#include<iostream>

using namespace std;

int main(int argc, const char** argv) {
    char number[8];
    cout << "what is the number :";
    cin>>number;
    char Number[3];
    for (int i = 3; i >= 0; i--)
    {
        int j=0;
        Number[j]=number[i];
        j++;
        cout<<number[i];
    }
    cout<<Number;
    return 0;
}