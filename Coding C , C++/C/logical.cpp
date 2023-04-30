#include <iostream>

int main(void){
   bool a(true);
   bool b(false);
   bool c(true);

   std::cout<<std::boolalpha; //true /false
   std::cout << a << std::endl;
   std::cout << b << std::endl;
   std::cout << c << std::endl;
   std::cout << std::endl;

   std::cout<<"a && b is :"<< (a&&b) <<std::endl;
   std::cout<<"a || b is :"<< (a||b)<<std::endl;
   std::cout<<"b && c is :"<< (b&&c)<<std::endl;
   std::cout<<"b || c is :"<< (b||c) <<std::endl;


   
    return 0;

}