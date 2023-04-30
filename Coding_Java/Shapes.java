import java.util.Scanner ;

class Figures{
	double a , b;

	void area(){
		System.out.println("The area of the figure is some function of side");
		}
	}

	class Rectangle extends Figures{


		void area(){
			System.out.println("Area of rectangle : "+a*b);
			}
	}

	class Triangle extends Figures{


		void area(){
		System.out.println("Area of Triangle:"+0.5*a*b);
			}
	}

	public class Shapes{
		public static void main(String args[]){
Figures R = new Rectangle();
R.a = 7;
R.b = 8 ;
R.area();
Figures T = new Triangle();
T.a = 6 ;
T.b = 5;
T.area();
			}
		}
