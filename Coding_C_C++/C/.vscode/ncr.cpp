#include<bits/stdc++.h>
using namespace std;
void abcd(){
        int n,m;
    cin>>n>>m;
    int answer=1;
    int answer1=1;
    for (int i = n; i>=1; i--) {
        answer=answer*i;
    }
    for (int j = m; j>=1; j--) {
        answer1=answer1*j;
    }
    int c=n-m;
    int answer2=1;
    for (int k = c; k>=1; k--) {
        answer2=answer2*k;
    }
    int d;
    d=answer1*answer2;
    int e;
    e=answer/d;
    cout<<e<<endl;
}
int main(){
    abcd();
    abcd();
    abcd();
    abcd();
    abcd();
    return 0;
}