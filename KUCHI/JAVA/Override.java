//overriding test
class Abc
{
	//method 1
	void m1()
	{
		System.out.println("this is method 1 of the non static superclass Abc");
	}
	//method 2
	static void m2()
	{
		System.out.println("this is method 2 of the static superclass Abc");
	}
}
class Xyz extends Abc
{
	//method 1 in subclass

	void m1()
    {
		System.out.println("this is method 1 of the non static subclass Xyz");
		//result show of subclass
    }
	static void m1()
	{
		System.out.println("this is method 1 of the static subclass Xyz");
		//compile time error
	}

	//method 2 in subclass

	void m2()
    {
		System.out.println("this is method 2 of the non static subclass Xyz");
		//m2() in Xyz cannot override m2() in Abc
		//compile time error
	}
	static void m2()
	{
		System.out.println("this is method 2 of the static subclass Xyz");
		// when we don't use obj result shows of subclass
		// when we use obj then result is superclass
	}
}

class Override
{
	public static void main(String args[])
	{
		Abc ob = new Xyz();
		ob.m2();
	}
}
