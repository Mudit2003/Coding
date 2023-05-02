import java.util.ArrayList;
import java.util.Scanner;

public class Reachability {

    static boolean[] visited;
    private static int reach(ArrayList<Integer>[] adj, int x, int y) {
        if(x == y && !visited[y]){
            return 1;
        }
        visited[x] = true ; 
        int res = 0 ; 
        for (int value : adj[x]) {
            if(!visited[value]){
                
                res=reach(adj, value, y)==1?1:res;
                System.out.println("x:"+(x+1)+" y"+(y+1)+" res:"+res);
            }
        }
        return res;
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
        int x = scanner.nextInt() - 1;
        int y = scanner.nextInt() - 1;
        visited = new boolean[n];
        System.out.println(reach(adj, x, y));
    }
}

