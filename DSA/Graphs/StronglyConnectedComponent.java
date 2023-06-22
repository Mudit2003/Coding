import java.util.*; 

class Solution
{
    int count = 0 ; 
    ArrayList<Integer> postOrder ; 
    boolean[] visited ; 
    
    private void display(ArrayList<Integer> arr){
        System.out.println("Display");
        for(int value : arr){
            System.out.print(value+" ");
        }
        System.out.println();
    }
    private void display(boolean[] arr){
        System.out.println("Display");
        for(boolean value : arr){
            System.out.print(value+" ");
        }
        System.out.println();
    }
   
    private void explore(int u , ArrayList<ArrayList<Integer>> adj) {
        visited[u] = true ; 
        for(int v: adj.get(u)){
            if(!visited[v]){
                explore(v , adj);
                // System.out.println(v);
            }
        }
        // System.out.print(u+",");
        postOrder.add(u);
    }
        
    private void dfs(int V , ArrayList<ArrayList<Integer>> adj){
        for(int v = 0 ; v < V ; v ++){
            if(!visited[v]){
                explore(v , adj);
            }
        }
    }
    
    private ArrayList<ArrayList<Integer>> reverseGraph(int V , ArrayList<ArrayList<Integer>> adj){
        // as it is an object pass by reference 
        ArrayList<ArrayList<Integer>> reverseGraph= new ArrayList<>(); 
        for(int v = 0 ; v < V ; v++){
            reverseGraph.add(v , new ArrayList<>());
        }
        for(int u = 0 ; u < V ; u++){
            for(int v : adj.get(u)){
                // for each u belonging to the adjacency list 
                // display(reverseGraph.get(v));
                reverseGraph.get(v).add(u);
                // display(reverseGraph.get(v));
            }
        }
        return reverseGraph ; 
    }
    
    //Function to find number of strongly connected components in the graph.
    public int kosaraju(int V, ArrayList<ArrayList<Integer>> adj)
    {
        visited = new boolean[V];
        postOrder = new ArrayList<>();
        ArrayList<ArrayList<Integer>> adjR = reverseGraph(V , adj);
        dfs(V , adjR);
        // now the postNumbers will be assigned and values will be well dictated 
        // display(postOrder);
        visited = new boolean[V];
        int count = 0 ; 
        for(int i = V-1 ; i >= 0 ; i--){
            int u = postOrder.get(i);
            // display(visited);
            if(!visited[u]){
                // System.out.println(u);
                explore(u , adj);
                count++;
            }
        }
        return count ; 
    }
}

class StronglyConnectedComponent{

    public static<T> T run(T name){
        System.out.println(name);
        return name;
    }
    public static void main(String args[]){
       run(7);
    }
}