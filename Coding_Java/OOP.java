// Constructor - A no return type function having the same name as the class it is inside
// can only be used once at the time of object creation ;
// Three types of constructor - non parametrized , parametrized , copy constructor
import java.util.Scanner;
import bank.Bank; // This is how we import a package and use a public class
                  // VScode and other platforms maybe allow package to be accessed by just saying import.bank but here we have to signify the public class too
                    // Thus we can import no other than the data of a public class by using a package
                    // Refer to bank.java for the insides of this package and access modifiers

 // Data and fucntions(methods) - all treated as one unit inside a class and its objects this is called encapsulation
 //Encapsulation with the access modifiers facilititates data hiding

class Student {

	// These are called data
	String name ;
	int roll ;
	char grade ;

	//A parametrized constructor
	Student(String name , int roll , char grade){
		this.name = name ;
		this.roll = roll ;
		this.grade = grade;
		}

	// Copy Constructor
	Student(Student S){
		name = S.name ;
		roll = S.roll ;
		grade=S.grade;
		}

// After creation of a parametrized constructor  non parametrized constructor is no longer present by default , therefore we need to define it

Student(){
	}

	// Java has an automatic garbage collector to delete the objects that are not being used anymore
	// Thus there is no syntax to write destructor in java as there is no need

	 // Functions are called members and methods
	 void gradeCard(){
		 System.out.println("Name : "+name);
		 System.out.println("Roll No. :"+roll);
		 System.out.println("Grade :"+grade);
		 }

	public void printinfo (String name){
		System.out.println("Name :"+name);
		}
	public void printinfo(int roll){
		System.out.println("Roll :"+roll);
		}
	public void printinfo(String name , int roll){
		System.out.println("Name:"+name+"Roll:"+roll);
		}
	// Polymorphism - Poly + morphism - Many forms - Function overloading - compiletime polymorphism and function overwriting - runtime polymorphism
		// Different different functions with same name created inside the same class
		//There must be some differentiating factor - parameters or  number of arguments
		// Note - return type is not a basis of differentiation
		// Compiletime polymorphism is preferred over runtime as runtime errors are harder to contemplate

	}

	class Shape {
		String color ;
public void displayArea(){
	System.out.println("Display Area");
	}
		}

	class Triangle extends Shape { // Single level inheritance
	double base , height ;
        public void displayArea(){
			System.out.println("Area :"+0.5*base*height);
			}
		}// Triangle class inherits the property of shape class , it would have the color property of shape

    class EquilateralTriangle extends Triangle{ // Multi level inheritance
		public void displayArea(){
			System.out.println("Area :"+1.73*base);
			}
		}

	class Circle { // Hierarchial class

		double radii ;
		public void displayArea(){
		System.out.println("Area:"+3.14*radii*radii);
			}
		}

// The whole tree of class that we constructed above is a hybrid class of single level class , multi-level class and hierarchial class
// One class can implement another n number of class but extend only to a single class
public class OOP {
	public static void main(String args[]){
		Student S1 = new Student("Mudit" , 56 , 'B');
		Student S2 = new Student(S1);
		S2.gradeCard();
		// We can make objects from class Bank by importing it in the form of package but not Account as it is not public
		//bank.Account b = new bank.Account();//Account is not public inside bank only public classes could be accessed from outside and none other
		}
	}