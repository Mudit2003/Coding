import java.util.Scanner;

class Power{
    int power(int a , int b ){
        if(b==1) return a ; 
        int mid = b / 2 ; 
        return power(a , b - mid )*power(a , mid);
    }

    public static void main(String args[]){
        int a , b ; 
        Scanner sc = new Scanner(System.in);    
        System.out.print("a:");
        a = sc.nextInt();
        System.out.print("b:");
        b = sc.nextInt();

        Power p = new Power();
        System.out.println(p.power(a, b));
        // System.out.println(Math.pow(a, b));
        
        // int power = 1 ; 
        // for(int i = 0 ; i<b ; i++){
        //     power*=a ; 
        // }
        // System.out.println(power);
        

    }
}
