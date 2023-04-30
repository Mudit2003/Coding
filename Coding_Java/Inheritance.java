class Vehicle
{
	String vname,ssn;
	int modno ,price;

	Vehicle(String a, String b, int m ,int p)
	{
		vname=a;
		ssn=b;
		modno=m;
		price=p;
   
	  

   }
   void display()
	  {
		System.out.println("vehicle name" +vname);
		System.out.println("vehicle price" +price);
		System.out.println("vehicle model no." +modno);
		System.out.println("service station name" +ssn);
	  }
}

class Bike extends Vehicle
{
	double rate;
    
	
	
	void abc(double r, String n, int price,int mn, String station)
	{
       bike(double r, String n, int price,int mn, String station) {
		super(n,station,mn,price);
        rate = r;
	   }
	System.out.println("discount rate: "+ rate);
    }
   void display(){ 
    super.display();
    System.out.println("Discount rate :"+rate);}

   void discount()
	   {
		System.out.println("discount = " + (price*rate));
	   }
}


class Inheritence
{
	public static void main(String args[])
	{
		Bike b= new Bike(0.01,"hero",10000,123456,"wxyz");
		b.display();
		b.discount();
	}
}