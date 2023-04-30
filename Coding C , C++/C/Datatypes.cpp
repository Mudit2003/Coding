#include<iostream>
#include<iomanip>

int main()
{
    int Rod(0); // iniatializes to zero 
    int chutiya; //uninitialized
    /*int load{2.5}; ..... wont work ...... Braced initialization*/
    int load(2.7); //function initialization
    //std::cout<<Rod<<"The size of rod is: "<<sizeof(Rod)<<std::endl<<load<<std::endl;
    //std::cout<<chutiya;

    long Mudit(0);
    //std::cout<<Mudit<<std::endl<<"Size of long is: "<<sizeof(Mudit);

    /*float M(2.017898457985973408808459034880485);
    std::cout<<std::setprecision(9)<<M<<std::endl;*/

    double A{1.09895738524777238774758759027374682745008349372409870826572374};
    /*std::cout<<0.0/0.0;
    std::cout<<A;*/
    //narrowing happens when you use double i.e many points after the decimal unit are chopped off 
   //put f as suffix in float and L in long double  
   // e used for exponential s
    return 0;
}
