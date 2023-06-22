#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

vector<int> radixSort(vector<int> arr) {
    int maximum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        maximum = max(maximum, arr[i]);
    }
    cout<<maximum<<endl;
    int d = 1;
    int temp = maximum;
    while (temp /= 10)
        d++;

    cout<<d<<endl;
    vector<int> B(arr.size());
    for (int i = 0; i < d; i++) {
        vector<int> count(10, 0);
        
        for (int j = 0; j < arr.size(); j++) {
            int exp = (arr[j] / (int)pow(10, i)) % 10;
            count[exp]++;
        }
        
        for (int j = 1; j < 10; j++)
            count[j] += count[j - 1];
        
        for (int j = arr.size() - 1; j >= 0; j--) {
            int exp = (arr[j] / (int)pow(10, i)) % 10;
            B[count[exp] - 1] = arr[j];
            count[exp]--;
        }
        arr = B;
    }
    
    return B;
}

int main(){
    vector<int> arr{232 , 764 , 832 , 542 , 799 , 121 , 200 , 122 , 699 , 982};
    auto B = radixSort(arr);
    for(int i:B){
        cout<<i<<" ";
    }
}