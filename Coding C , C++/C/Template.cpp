#include<iostream>
#include<string>
#include<cstring>
using namespace std; 

template<typename T,typename S>
S func(T a , S b){
    return a + b ; 
}

template<typename T>
T maximum(T a , T b){
    return a>b?a:b;
}

// template specialization comes in when the function template you created will give an ambiguity for a specific data type 
// here maximum function will give bad results if const char* are passsed 
// hence we did this

/*template<> 
const char* maximum(const char* a , const char* b){
    return strcmp(a,b)>0?a:b;
}*/

// if we created a function rather than a template specialization 
const char* maximum(const char* a , const char* b){
    return strcmp(a,b)>0?a:b;
}
int main(){
    // this is the way of a template that's how we do it 
    // instead of writing the same function over and over again for different data types 
    // template is a blueprint function is created depending upon the input 
    cout<<func(8,9.8)<<endl;
  
  // generally if we give arguments of conflicting type when both have to be of same type then conflict could arise 
  /*cout<<max(8,9.8)<<endl;
  c:\mingw\mingw32\include\c++\12.2.0\bits\stl_algobase.h:300:5: note:   template argument deduction/substitution failed:
Template.cpp:22:12: note:   deduced conflicting types for parameter 'const _Tp' ('int' and 'double')
   22 |   cout<<max(8,9.8)<<endl;
   */
   // to avoid this conflict we use explicit type conversion
   auto value = maximum<double>(8,9.7);
   cout<<value<<endl;
   // now no compiler error because of explicit type conversion
   // if template specialization was not done the pointer addresses will be compared and freater of them will be printed 
   auto result = maximum("Hello","World");
   
   cout<<result<<endl;

}