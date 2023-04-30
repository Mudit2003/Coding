// checking main method in a subclass
class Check1
{
	static void abc()
	{
		System.out.println("hello everyone");
	}
}
class Check extends Check1
{
	void xyz()
	{
		super.abc();
		//super keyword is used as a refrence to the object of the superclass
		//to use super the method should be non static that is invoked by the object
	}

	public static void main(String args[])
	{

		//Check c= new Check();
		//c.xyz();
		System.out.println("my name is ananya");
	}

}

