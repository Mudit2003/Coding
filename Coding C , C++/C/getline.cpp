#include<iostream>
#include<string>

using namespace std;

int main(void){
   string full_name;
   int age;
   cout<<"Tell me your name and your age :";
   getline(cin,full_name);
   cin>>age;
   cout<<"You are "<<full_name<<", "<<age<<" years old";
}