import java.util.Scanner;

class Square{
double a ;//length
Square(double a){
	this.a = a;
	}
double area(){
	double area = Math.pow(a,2);
	return area;
	}
}

class Rectangle extends Square{
	double b ;// breadth
	Rectangle(double a ,double b){
		super(a);
		this.b = b ;
		}
	double area(){
		double area = a*b;
		return area;
		}
	}

class Triangle extends Rectangle{
	double c ; // third side of the triangle
	Triangle(double a , double b ,double c ){
		super(a,b);
		this.c = c ;
		}
	double area(){
		double s=(a+b+c)/2;
		double area = Math.sqrt(s*(s-a)*(s-b)*(s-c));
		return area;
		}
	}

	public class Shape{

		public static void main(String args[]){
			Square A = new Square(2.8);
			Rectangle B = new Rectangle(2.4,7.2);
			Triangle C = new Triangle(2,3,4);

			System.out.println("Area of square:"+A.area());
			System.out.println("Area of rectangle:"+B.area());
			System.out.println("Area of triangle:"+C.area());
			}
		}