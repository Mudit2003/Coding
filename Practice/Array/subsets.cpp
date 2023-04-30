#include<bits/stdc++.h>
    class Solution {
private: 
    vector<vector<int>> res;
    void solve(vector<int>&nums,vector<int>pset,int i){
        if(i==nums.size()){
            res.push_back(pset);
            return ; 
        }
        solve(nums,pset,i+1);
        pset.push_back(nums.at(i));
        solve(nums,pset,i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int>pset;
    solve(nums,pset,0);
    return res;
    }
};
};
