public class Cons{
	public static void main(){
		Consensus c = new Consensus();
		}
	}


class Consensus{
	int a , b;
	Consensus(int a , int b ){
		this.a = a;
		this.b = b;
		int sum(){
			return a+b;
		}
		System.out.println("The value of sum is : "+sum());
	}
}