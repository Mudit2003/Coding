class Solution {
private:
    string p , s ; 
    vector<vector<int>> memo ; 

    bool dfs( int i , int j){
        // i keeps the track of s index and j keeps track of regular expression index 
        if(memo[i][j]!=-1) return memo[i][j] ;
        if(i >= s.size() && j>= p.size()) return true ;
        if(j>=p.size()){
            //  cout<<j<<endl; 
             return false ; }
        bool match = i<s.size() && (s[i] == p[j] || p[j] == '.');
        if(j+1<p.size() && p[j+1]== '*') {
            memo[i][j] = dfs( i , j+2) || (match && dfs( i+1 , j)) ; 
            return memo[i][j];
        }
        if(match){ 
            memo[i][j] =  dfs( i+1 , j+1) ; 
            return memo[i][j]; 
        }
        // cout<<s<<endl; 
        memo[i][j] = false ; 
        return false ; 
    }
public:
    bool isMatch(string s, string p) {
        this->s = s;
        this->p = p;
        memo = vector<vector<int>>(s.size()+1, vector(p.size()+1, -1));
        return dfs(0,0);
    }
};