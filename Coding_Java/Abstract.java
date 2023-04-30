import java.util.Scanner;

// Abstraction is hiding the implementation detail and only showing the useful/important parts to the user

public class Abstract {

   // C ob = new C();
  //  ob.method2();

	//abstract void add();//abstract method - a generalization that existed but had no meaning itself and needs the user to define it
	// undefined
	//gives error - Abstract is not abstract and does not override abstract method add()


public static void main(String args[]){
 Pony p = new Pony();
 p.animalRuns();
	}
}

// We can have a constructor inside

abstract class Abs{

	// abstract void add();//abstract method - a generalization that existed but had no meaning itself and needs the user to define it


	// undefined
	// an abstract method should always be inside an abstract
	//Defination - A class where atleast one method of the class should be abstract
	// Abstract class should have a child class to overwrite its methods - define it to
}

class child extends Abs{
	// The abstract method from class Abs is defined and overwritten here
	void add(){}; // Now the method is defined
	}

/*abstract class A {
	abstract void method1();
	abstract void method2();
	void method3() {};
	}



abstract class B extends A  {
	void method1(){

		}

super.method3();
//abstract void method2();
}
// In older compiler you  needed to rewrite the ones that have not been overwritten yet but nowadays it gives us errors

class C extends B {
 void method2(){}
 super.method1();
	}

*/
abstract class Animal{// animal is just an idea

	Animal(){
		System.out.println("It is the class animal : ");
		}
	double height ;
	double weight ;
	abstract void animalEats();
	void animalRuns(){
		System.out.println("The animal is fast ");
		}
	abstract void animalNumber();

}

	abstract class Horse extends Animal{
        Horse(){
			System.out.println("Hahahahaha , I am horse ");
			}
		void animalEats(){
			System.out.println("It is a herbivore hence eats grass ");
			}


			}

	class Pony extends Horse{
		int number ;
		Pony(){
			System.out.println("Ui Ui I am pony");
		}
		/*void animalRuns(){
			System.out.println("Pony runs fast");
			}*/
		void animalNumber(){
			System.out.println("There numbe is as low as "+number);
			}

		}

