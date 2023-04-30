#include<iostream>
#include<vector>

using namespace std ; 

template<typename t>
class SearchElementInaSortedMatrix{
    public:
    int binarySearch(vector<t> arr , int n ,t item){
    int left = 0 , right = n-1 , mid ;
    while(left<=right){
    mid = left + (right-left)/2;
    if(arr[mid]==item)
    return mid ; 
    else if(arr[mid>item])
    right = mid - 1 ; 
    else 
    left = mid+1 ; 
    }
    printf("Item not in list ");
    return -1 ; 
    }
    void display(vector<t> arr){
        for(t value : arr){
            cout<<value<<" ";
        }
        cout<<endl;
    }
    // public : 
    
};

int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    SearchElementInaSortedMatrix<int> a;
    cout<<a.binarySearch(arr,arr.size(),5);
}