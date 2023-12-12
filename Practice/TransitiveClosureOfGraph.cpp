#include <vector>
#include<iostream>

using namespace std;

class TransitiveClosure {
private:
    vector<bool> visited;
    vector<vector<int>> reachabilityMatrix;
    int n;

    void explore(const vector<vector<int>> graph, int i) {
        display(graph , n);
        // if visited you can go back and evaluate the reachability matrix
        if (this->visited[i]) return;

        // else visit it, finalize the reachability matrix then return back
        this->visited[i] = true;

        // every element is reachable from itself
        this->reachabilityMatrix[i][i] = 1;

        // trying to finalize the reachability matrix by going through every edge
        for (int j = 0; j < this->n; j++) {
            // if there is an edge from i to j
            if (graph[i][j]) {
                // finalize reachability for j
                explore(graph, j);
                // whatever can be reached from j can be reached from i too
                for (int k = 0; k < this->n; k++) {
                    this->reachabilityMatrix[i][k] = this->reachabilityMatrix[i][k] || this->reachabilityMatrix[j][k];
                }
            }
        }

        // reachability array is finalized for i, usable
    }

public:

    void display(vector<vector<int>> vec , int N){
        cout<<"Display Graph"<<endl;
        for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    }

    vector<vector<int>> transitiveClosure(int N, const vector<vector<int>>& graph) {
        // create a new matrix for reachability
        this->reachabilityMatrix = vector<vector<int>>(N, vector<int>(N, 0));

        // initially none of them are visited
        this->visited.assign(N, false); // use assign instead of creating a local vector

        // total number of vertices is n
        this->n = N;

        // copy values from graph to reachabilityMatrix
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                this->reachabilityMatrix[i][j] = graph[i][j];
            }
        }

        // checking for every vertex
        for (int i = 0; i < N; i++) {
            if (!this->visited[i]) {
                explore(graph, i);
            }

            // for this edge, exploration took place
        }

        return reachabilityMatrix;
    }
};

int main() {
    TransitiveClosure tc;
    int N = 7;
    vector<vector<int>> graph = {
        {1, 1, 0, 0, 1, 1, 0},
        {1, 0, 1, 1, 1, 1, 1},
        {0, 0, 1, 0, 1, 0, 1},
        {0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0},
        {0, 0, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 0, 0, 1}
    };

    vector<vector<int>> result = tc.transitiveClosure(N, graph);

    // Output the result
    

    return 0;
}
