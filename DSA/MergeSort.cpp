#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<queue>
using namespace std ; 

class Merge{
    public : 
    void merge(vector<int>& arr , int beg , int mid , int end ){
        queue<int , deque<int>> left{deque<int>(arr.begin() ,arr.begin()+(mid+1))} , right{deque<int>(arr.begin()+(mid+1), arr.begin()+(end+1))};
        left.push(INT_MAX) , right.push(INT_MAX);
        cout<<"left:"<<left.size()<<"right:"<<right.size()<<endl;
        int count = beg ; 
            cout<<"In range "<<beg<<"to "<<end<<":"<<endl ; 
        while (count <= end)
        {
           if(left.front() < right.front() ){
            arr.at(count) = left.front();
            cout<<"Value:"<<left.front()<<endl;
            left.pop();
           }
           else{
           arr.at(count)=right.front();
           cout<<"Value:"<<right.front()<<endl;
           right.pop();
           }
           cout<<"Value:"<<arr.at(count)<<endl;
           count++;
        }
        
    }
    void mergeSort(vector<int> arr , int beg , int end  ){
    if(beg>=end)return ; 
    int mid = (beg+end)/2 ;
    mergeSort(arr , beg , mid); 
    mergeSort(arr , mid+1 , end); 
    merge(arr , beg , mid , end);
    }
};


int main(){
  Merge M ; 
  vector <int> arr {8,7,6,5,4,3,2,1};
  //  cout<<*(arr.end()); here this prints the output to be some garbage value because end is further than the end value 
  // to be precise, just next to the final value, maybe it can be adjusted to get to the last value...
  // vector<int> left{arr.begin() , arr.begin()+4};
   // here arr.begin points to index zero will arr.begin()+4 == left.end() and the end points to the element next to the last 
   

//  M.mergeSort(arr, 0 , 7);
//  for (auto &&v : arr)
//  {
//    cout<<v<<endl;
//  }
  cout<<0%7;
}