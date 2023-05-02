#include <iostream>
#include <vector>

using std::vector;
using std::pair;

std::vector<bool> visited; 
int reach(vector<vector<int> > &adj, int x, int y) {
  visited[x-1] = true;
  for(auto value: adj[x-1]){
    
  }
  return 0;
}

int main() {
  size_t n, m;
  std::cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  for (size_t i = 0; i < m; i++) {
    int x, y;
    std::cin >> x >> y;
    adj[x - 1].push_back(y - 1);
    adj[y - 1].push_back(x - 1);
  }
  int x, y;
  std::cin >> x >> y;
  for(int i= 0 ; i<x ; i++){
  visited.push_back(false);
  }
  std::cout << reach(adj, x - 1, y - 1);
}
