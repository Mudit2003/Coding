   #include<bits/stdc++.h>
    using namespace std; 
    
//     vector<int> subarraySum(vector<int>arr, int n, long long s)
//     {
//        // loop to calculate prefix sum 
//         // as non negative integers are here no chance of the number going down 
//        // difference of s seen in those numbers 
//      //  long long x ;
     
//        //vector<int> ret{-1,-1};
//     int i,j;
//         for(i=-1 ; i<n-1 ; i++){
//             if(i<0)x=s;
//             else x= prefixsum.at(i)+s;// ever changing
            
//             for(j=i+1;j<n-1;j++){
//                 if(prefixsum.at(j)>=x)
//                 break;
//             }
//             //end of loop two
//             if(prefixsum.at(j)==x){
//                 return {i+2,j+1};
//             }
//          }
//        return {-1};
//     }
//     // optimized solution 
//  class SubarraySum{
//     vector<int> subarraySum(vector<int>arr, int n, long long s)
//     {
//         // the problem could be solved using sliding window technique 
//         long long x=0;
//         int i=0,j=-1 ; 
//         while(x!=s&&i<n&&j<n){
            
//             if(x<s){
//                 x+=arr[++j];
//               //  cout<<"Expansion:"<<j<<endl;
//             }
//             else{
//                 x-=arr[i++];
//              //  cout<<"Contraction:"<<i<<endl;
//             }
//         }
//         if(j<i)return{-1};
//         if(x==s)return{i+1,j+1};
//         return{-1};
//     }
// };

// class MaxSubarraySum{
//      long long maxSubarraySum(int arr[], int n){
//     vector<int> prefixsum;
//     int max=arr[0],maxindex=0;
//     prefixsum.push_back(arr[0]);
//     for(int i=1 ; i<n ; i++){
//         prefixsum.push_back(arr[i]+prefixsum.at(i-1));
//         cout<<prefixsum.at(i)<<" "; 
//         if(prefixsum.at(i)>max){
//         max=prefixsum.at(i);
//         maxindex=i;}
//     }
//     if(maxindex==0)return max;
//     int min=prefixsum.at(maxindex-1);
//     for(int j=maxindex-2 ; j>=0 ;j--){
//     if(prefixsum.at(j)<min)
//     min=prefixsum.at(j);
//     }
//     if(min<0)
//     return max-min;
// }

// class Kadanes{
//      long long maxSubarraySum(int arr[], int n){
//     int max=INT_MIN,sum=0;
//     for(int i=0;i<n; i++){
//         sum+=arr[i];
//         if(sum>max)
//         max=sum;
//         if(sum<0)
//         sum=0;
//        // cout<<sum<<" "<<max<<endl;
//     }
//     return max;
//     }
// };

   int main(){
    cout<<3/7.0<<endl;
   }