#include <iostream>
#include<vector>
using namespace std; 

void towerofhanoi(int n , vector<int>A,vector<int>B,vector<int>C){
    if(n==1){
    C.push_back(A.back());
    A.pop_back();
    return ;
    }
    towerofhanoi(n-1,A,C,B);
    // C.push_back(A.back());
    // A.pop_back();
    towerofhanoi(1,A,B,C);
    towerofhanoi(n-1,B,A,C);
}
int main(){
    vector<int>A{9,8,7};
    vector<int> B,C;
    towerofhanoi(A.size(),A,B,C);
  for(int i=0 ; i<A.size() ; i++){
    cout<<A.at(i)<<endl;
  }
    
    return 0 ; 
}