#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//using namespace std;


int main() {
  int n , q ; // number of elements in array a 
  std::cin>>n>>q;
  int* a[n],k;
  int* p ; 
  for(int i = 0 ; i<n ; i++){
      std::cout<<"Elements in"<<i<<":";
      std::cin>>k;
      p = new int[k];
      a[i]=p;
      for(int j=0 ; j<k ; j++ , p++){
          std::cin>>*p;
          std::cout<<p<<"-->"<<*p<<std::endl;
      }
      p = nullptr; 
        }
  int i[q] , j[q] , count=0 ; 
  while(count<q){
    std::cout<<"Enter: ";
  std::cin>>i[count]>>j[count]; 
  count++;
  }
  count=0;
  while(count<q){
  std::cout<<*(a[i[count]]+j[count]);
  
  }
    return 0;
}
