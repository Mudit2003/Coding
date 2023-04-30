abstract class Shape{
	abstract void numberofsides();
	}

class Hexagon extends Shape{

	void numberofsides(){
		System.out.println("Number of sides in Hexagon is 6");
		}

}

class Triangle extends Shape{
	void numberofsides(){
		System.out.println("Number of sides is 3");
		}
	}

class Trapezoid extends Shape{
	void numberofsides(){
		System.out.println("Number of sides is 12");
		}
	}

public class ShapeDemo {
	public static void main(String args[]){
		Triangle A = new Triangle();
		Trapezoid B = new Trapezoid();
		Hexagon C = new Hexagon();

		A.numberofsides();
		B.numberofsides();
		C.numberofsides();
		}
	}