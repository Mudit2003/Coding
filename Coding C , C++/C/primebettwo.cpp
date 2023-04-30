#include <iostream>

int primebettwo(int a , int b){
	int count = 0 ;
	for(int i = a ; i <= b ; i ++){
		if(i==0 || i==1)continue;
		for(int j = 2  ; j <= i/2; j++ ){
			if(i%j){
				goto A ;
				}
				continue;
			}
			count ++ ;
			A: continue ; 
		}
		return count ;
	}
int j = 2 ; 
bool isprime(int a){   // 2
	/* if(a==1)return false ;
	if(!a) return false ;
	
for(int j = 2  ; j <= a/2; j++ ){
			if(a%j)continue; 
			else return false; 
			}
		return true ;*/
if(a<2)return false; 
if(a==2)return true;
if(a%j==0)return false;

if(j==a/2)return true;
j++;
return isprime(a);

}
int main(){
   //std::cout<<primebettwo(0,9);
   int a , b ,count=0 ; 
   std::cout<<"What are a and b:";
   std::cin>>a>>b; 
   for(int i = a; i<= b ; i++){
    if(isprime(i)){
		std::cout<<"Prime number "<<count++<<":"<<i<<std::endl;
		j=2;
   }
   }
std::cout<<"Total number of primes is "<<count ;
	}