#include<iostream>
#include<vector>

using namespace std;

void bucketSort(vector<double>& arr){
    vector<vector<double>> B(arr.size());
    for(int i=0 ; i<arr.size() ; i++){
        int exp = arr.size()*arr[i];
        cout<<exp<<" "<<arr[i]<<endl;
        B[exp].push_back(0);
        int j = B[exp].size()-1;
        while(j && arr[i]>B[exp][j-1]){
            B[exp][j] = B[exp][j-1];
            j--;
        }
        B[exp][j] = arr[i];
        cout<<B[exp][j]<<endl;
    }
    int x=0; 
    for(int i=0 ; i<arr.size() ; i++){
        while(!B[i].empty()){
            arr[x] = B[i].back();
            B[i].pop_back();
            x++;
        }
    }
}
int main(){
    vector<double> arr = {0.91 , 0.28 , 0.76 , 0.83 , 0.11 , 0.32 , 0.69 , 0.23 , 0.51 , 0.26};
    bucketSort(arr);
    for(auto value:arr){
        cout<<value<<" ";
    }
}