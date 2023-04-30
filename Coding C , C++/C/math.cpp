#include<iostream>
#include<limits> //has some functions like std::numeric_limits<type>::min() or max();
#include<cmath>
const int pi(22/7);
int main()
{
    std::cout<<"The lowest value of float is "<<std::numeric_limits<float>::min();
    std::cout<<std::floor(7.7)<<std::endl;
    std::cout<<std::ceil(7.7)<<std::endl;
    std::cout<<std::abs(-5000)<<std::endl;
    std::cout<<std::exp(1)<<std::endl;
    std::cout<<std::pow(2,3)<<std::endl;
    std::cout<<std::log10(2)<<std::endl;
    std::cout<<std::sqrt(4)<<std::endl;
    std::cout<<std::round(2.5)<<std::endl;
    std::cout<<std::sin(90)<<std::endl;
    std::cout<<std::tan(90)<<std::endl;
    return 0;
}
