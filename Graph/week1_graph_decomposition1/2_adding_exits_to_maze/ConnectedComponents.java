import java.util.ArrayList;
import java.util.Scanner;

public class ConnectedComponents {
    private static boolean[] visited;
    private static void reach(ArrayList<Integer>[] adj, int x) {
        visited[x] = true ; 
        System.out.print(x+1+" ");
        for (int value : adj[x]) {
            if(!visited[value]){
                // System.out.print();
                reach(adj, value);
                // System.out.println("x:"+(x+1));
            }
        }
    }
    private static int numberOfComponents(ArrayList<Integer>[] adj) {
        int result = 0;
        for(int i = 0 ; i < adj.length ; i++){
            if(!visited[i]){
                result++;
                reach(adj, i);
            }
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        ArrayList<Integer>[] adj = (ArrayList<Integer>[])new ArrayList[n];
        for (int i = 0; i < n; i++) {
            adj[i] = new ArrayList<Integer>();
        }
        for (int i = 0; i < m; i++) {
            int x, y;
            x = scanner.nextInt();
            y = scanner.nextInt();
            adj[x - 1].add(y - 1);
            adj[y - 1].add(x - 1);
        }
        visited = new boolean[n];
        System.out.println(numberOfComponents(adj));
    }
}

