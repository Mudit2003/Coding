#include<iostream>
#include<vector>

using namespace std;
int knapSackRec(int W, int wt[], int val[], int i, int** dp)
{
    // base condition
    if (i < 0)
        return 0;
    if (dp[i][W] != -1)
        return dp[i][W];
 
    if (wt[i] > W) {
 
        // Store the value of function call
        // stack in table before return
        dp[i][W] = knapSackRec(W, wt, val, i - 1, dp);
        return dp[i][W];
    }
    else { 
        // Store value in a table before return
        dp[i][W] = max(val[i]
                           + knapSackRec(W - wt[i], wt, val,
                                         i - 1, dp),
                       knapSackRec(W, wt, val, i - 1, dp));
 
        // Return value of table after storing
        return dp[i][W];
    }
}

int knapSack(vector<int>& weight, vector<int>& value, int W, int n) {
    if (n == 0 || W == 0) {
        return 0;
    }
    int includedWeight = 0 , excludedWeight = 0 ; 
    if (weight[n - 1] <= W) 
        includedWeight= value[n-1]+knapSack(weight, value, W-weight[n-1], n - 1);
        excludedWeight  = knapSack(weight, value, W, n - 1);
        cout<<includedWeight<<" "<<excludedWeight<<endl;
        return max(includedWeight, excludedWeight);
}

int main() {
    vector<int> weight = {5, 6, 4, 3, 2};
    vector<int> value = {30, 30, 8, 12, 20};
    int W = 15;
    int n = weight.size();
    cout << knapSack(weight, value, W, n) << endl;

    return 0;
}