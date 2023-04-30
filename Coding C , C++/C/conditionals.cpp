#include<iostream>

int main(){
    int tool;
    int toll;
    std::cin>>tool>>toll;
    
    // switch only takes in integers and enums - short , long , signed , unsigned ;
    // switch (tool)
    // {
    // case 1:
    //     std::cout << "Answer is one" << std::endl;
    //     break;
    // case 2:
    //     std::cout << "Answer is two" << std::endl;
    //     case 3:
    //     std::cout << "Answer is three" << std::endl;
    
    // default:
    //     break;
    // }

    //Now we will learn about ternary operators 
//     int a(8);
//     int b(9);
//     int result = b>a ? 7 : 8;
//     std::cout<<result;
// }  
tool>toll ? std::cout<<11 : std::cout<<12;}