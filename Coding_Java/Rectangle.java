import java.util.Scanner ;

class Shape{
	double x , y ;
	void getxyvalue(double x , double y){
		System.out.println("Getting the xy value for a shape ");
		this.x = x;
		this.y = y;
		}
	void showxyvalue(){
		System.out.println("The x and y value for shape : "+x+"&"+y);
		}

	}

public class Rectangle extends Shape{
	void showxyvalue(){
		System.out.println("Length:"+x);
		System.out.println("Breadth:"+y);
		}
	public static void main(String args[]){
		Rectangle A = new Rectangle() ;
		A.getxyvalue(3,4);// This way by extending the classes we can refernce a non static method from a static context
		// Actually we may do this any time by just creating an object of the class in which main is there
		// The function is overriden in the subsequent class Rectangle
		A.showxyvalue();
		}
	}