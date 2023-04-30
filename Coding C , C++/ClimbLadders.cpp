#include<iostream>

using namespace std ; 
// We have to do it as recursive problem 
// count distinct way to reach the top 
int countdistinctwaytoreachtop(int N); // N being the number of steps you go 
int main(){
int n , ways;
cout<<"Top Stair:";
cin>>n; 
ways=countdistinctwaytoreachtop(n);
cout<<"Ways of reaching "<<n<<" are:"<<ways;
return 0 ; 
}

int countdistinctwaytoreachtop(int N){
    // base case 
    if(N==1){
        return 1 ;
    }
    if(N==2){
        return 2 ; 
    }
    // Cases I would have went from either N-1 or N-2th stair
    return countdistinctwaytoreachtop(N-1)+countdistinctwaytoreachtop(N-2);
}