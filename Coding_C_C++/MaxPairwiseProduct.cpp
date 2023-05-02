#include<iostream>
#include<vector>

using namespace std; 

class MaxPairWiseProduct{

    int maxPairWiseProductNaive(vector<int> & arr , int n){
        int maximum{__INT_MAX__} ; 
        int product = 0 ; 
        for(int i = 0 ; i < n  ; i++){
            // the current value is i 
            for(int j = 0 ; j< i ; j++){
                product = arr[i]*arr[j];
                maximum = max(product , maximum);
            }
            for(int j = i+1 ; j< n; j++){
                product = arr[i]*arr[j];
                maximum = max(product , maximum);
            }
        }
        return maximum ; 
    }
    int maxPairWiseProductOptimized(vector<int> & arr , int n){
        // this question return 
        
    }
};

int main(){
return 0 ; 
}