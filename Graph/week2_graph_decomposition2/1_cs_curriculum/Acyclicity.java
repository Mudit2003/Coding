import java.util.ArrayList;
import java.util.Scanner;

public class Acyclicity {
    private static int acyclic(ArrayList<Integer>[] adj) {
        // let us think of the idea of this code 
        // when thinking in very specific terms what this code actually does is just find if there is a cycle or not 
        // that is like knowing if there is a node comes back in a cycle 
        // that means while we were working with one directed graph we found something definetely not so trivial 
        // let us try and propose a lemma 
        return 0;
    }

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
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
            }
            System.out.println(acyclic(adj));
        }
    }
}

