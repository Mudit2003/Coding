#include<iostream>
#include<vector>

using namespace std ;

double knapsack(vector<int> weight , vector<int> value , int W , int item){
    if(W<=0 || item<=0){
        return 0 ; 
    }
    int A= 0; 
    if(W-weight[item-1])
     A = value[item-1]+knapsack(weight , value , W-weight[item-1] , item-1);
    int B = knapsack(weight , value , W, item-1);
    return max(A , B);
}