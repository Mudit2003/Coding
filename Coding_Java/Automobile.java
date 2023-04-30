// Write a class Vehicle where data members are - vehicle name , vehicle model number , vehicle price , service station name ;
// Methods - parameterless constructor , display - which is going to print vehicle name , vehicle prize , vehicle model number and service station name ;
//Define another class named as a bike where data members are discount_rate
// bike class is a child class of the class vehicle
// new display method Which is going to display - bike name , bike model number , bike prize and service station name and discount rate
// bike class has a function discount which is going to compute discount
import java.util.Scanner;
class Vehicle {
	String vehicle_name ;
	String vehicle_model_number ;
	double vehicle_prize ;
    String service_station_name ;

	Vehicle(String a ,String b ,double c ,String d){
		vehicle_name = a;
		vehicle_model_number = b ;
	    service_station_name = d ;
		vehicle_prize = c ;
		System.out.println("We have a vehicle");


		}
		void display(){
						System.out.println("Name :"+vehicle_name);
						System.out.println("Prize : "+vehicle_prize);
						System.out.println("Model Number : "+vehicle_model_number);
				System.out.println("Service Station Name :"+service_station_name);
		}


	}
 // this.a - refers to the class variable else local variable will get priority and the other one be overlooked
class Bike extends Vehicle {

	double discount_rate , discount;
  //  super.service_station_name= "Babab";
        Bike(String a ,  String b , double c , String d , double e){
	    super(a,b,c,d);
	    discount_rate = e ;

	 //   display();

			}
        void display (){
		super.display();
		System.out.println("Discount Rate  :"+discount_rate+"%");
		}
		void calcDiscount(){
				System.out.println("Discount is : "+vehicle_prize*(discount_rate/100));
				}
		//calcDiscount();


	}

public class Automobile{
	public static void main(String args[]){
		Bike B = new Bike("Honda" , "MXC0123" , 120000 , "Itanagar" , 1.2 ) ;
		B.display();
		B.calcDiscount();
		}
	}

