#include<iostream>
#include<vector>

using namespace std;

vector<int> countingSort(vector<int>& arr , int range){
    vector<int> count;
    for(int i=0 ; i<= range ; i++){
        count.push_back(0);
    }
    for(int i=0 ; i < arr.size() ; i++)
        count[arr[i]]++;
    for(int i=1; i<=range ; i++){
        count[i]+=count[i-1];
    }
    vector<int> B(arr.size());
    for(int i=arr.size()-1;i>=0;i--){
        B[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    return B;
}

int main(){
    vector<int> arr{7 , 3 , 8 , 5 , 2 , 6};
     vector<int> B = countingSort(arr , 8);
        for(int i:B){
        cout<<i<<" ";
    }
}