
class TransitiveClosure{

private int[][] reachabilityMatrix ; 
private int n ; 

// u is the current vertex we are at , this function explores all nodes reachable to the current node u
private void explore(int[][] graph , int u){

    this.reachabilityMatrix[u][u] = 1 ; // initially reachability matrix should have been 0 if not visited as reachability matrix is assigned all zero values 
    // initially , but every vertex is reachable from itself so marking 1 to tick the current vertex as visited as if not visited then the matrix should have 
    // been untouched with all zero values 

    for(int v = 0 ; v < this.n ; v++){
        // 1 denotes there is an edge from u to v that is v is a child of u and reachability matrix entry being zero denotes it must be non visited because 
        // if there is an edge from u to v then the reachability matrix entry shall be 1 for that , 0 entry signifies that reachability matrix has not yet
        // been finalized for that vertex , i.e that vertex is not visited yet 
        if(graph[u][v] == 1 && reachabilityMatrix[u][v] == 0){
            // to mark the reachability matrix visited keeping in mind that it is reachable from u 
            reachabilityMatrix[u][v] = 1 ; 
            // finalize reachability for v by doing the same process for all possible descendents of v to build up the reachability matrix in a bottom up 
            // manner
            explore(graph, v);
            // now the reachability matrix of the children is built so whatever is reachable from children must be reachable from parent 
            for(int k = 0 ; k < this.n ; k++){
                this.reachabilityMatrix[u][k] = this.reachabilityMatrix[v][k] ==  1 ? 1 : this.reachabilityMatrix[u][k] ; 
                // if the kth element is reachable from v then it will be reachable from u and if it is not reachable from v then whatever reachablity 
                // was known earlier from the graph and iterations from other children will hold(whatever the value was previously 1 or 0)
            } 
        }
    }

    // at the end of the for loop reachability array for a vertex u must be finalized , but unfortunately it's not and why shall be answered by you my lady
}

public int[][] transitiveClosure(int N , int[][] graph){

    // default array value in java is 0 so a NxN matrix with all entries zero is formed,  i.e no any vertex is reachable from any other  
    this.reachabilityMatrix = new int[N][N]; 

    // steps including this one simply lift the variable throughout the class 
    this.n = N ; 

    // dfs checking for every vertex 
    for(int u = 0 ; u < N ; u++){
        // not visited 
        if(this.reachabilityMatrix[u][u] == 0){
            explore(graph, u);
        }
    }

    return this.reachabilityMatrix ; 
}

}