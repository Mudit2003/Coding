import java.util.Scanner;

class Construct {
	int a ;
	String b ;
	char c ;

	Construct()
	{}
	Construct(int a , String b , char c ){
		this.a = a ;
		this.b = b ;
		this.c = c ;

		}

	/*Construct(Construct C){
		 Construct D = new Construct(C.a,C.b,C.c);// Not a valid line of code because the constructor cannot be called like this
		}
*/
	Construct(Construct C){
			this.a = C.a;
			this.b = C.b;
			this.c = C.c;
		}

	void display(){
		System.out.println("a:"+a);
		System.out.println("b:"+b);
		System.out.println("c:"+c);
		}
	}

	class Display extends Construct{

		Display()
		{
			//super(0,"sfd",'a');
		}
		void display(){
			System.out.println("Shut up motherfather");
			}
		}

	public class CopyConstructor{
		public static void main(String args[]){
			System.out.println("Hello Brother");
			Construct A = new Construct(27,"Hello",'a') ;
			Construct B = new Construct(A);
		Construct d = new Display();
			B.display();
			}
		}