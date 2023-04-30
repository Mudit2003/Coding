abstract class Abso{
	abstract void method();
	int a ,b ;
	Abso(int a , int b){
		this.a = a ;
		this.b = b ;
		System.out.println("I love you a lot ");
		}
	}

 class Abb extends Abso{
	int x, y ;
	Abb(int a , int b , int x , int y){
		super(a,b);

		this.x = x ;
		this.y = y;
	}

 void method(){
	 System.out.println("This is a non abstract class ");

		}
	}

public class Abbs{
	public static void main(String args[]){
		Abb a = new Abb(1,2,3,4);
		a.method();
		}
	}

