import java.util.Scanner;

class Circle{
    double radius;
    int angle;
	Circle(double r , int a ){
		radius = r;
		angle = a ;
		}

	double circleCircumference(){
		double circumference = 2*Math.PI *radius ;
		return circumference ;
		}

	double arcLength(){
		double arclength = angle/360.0 * circleCircumference();// We can definetely call a just defined fucntion inside another function
		// We require this 360.0 to typecast it to float implicitly
		return arclength ;
		}
	}

public class CircleDemo{
	static Scanner sc = new Scanner(System.in);
	public static void main(String args[]){
		double radius , circumference , arclength_90 ;
		int angle =90 ;
		System.out.print("Radius of the circle : ");
		radius = sc.nextDouble();
	    Circle c1 = new Circle(radius,angle) ;// 90 is the required arc length specified by the question
         circumference = c1.circleCircumference();
         arclength_90=c1.arcLength();
	     System.out.println("---------We have succesfully created a circle--------------- ");
	     System.out.println("Radius:"+radius);
	     System.out.println("Circumference:"+circumference);
	     System.out.println("Arclength(of 90 degree arc):"+arclength_90);
		}

	}