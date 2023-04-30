abstract class A
{


 abstract void m1();
 abstract void m2();
 void m3()
 {
	 System.out.println("m3 define");
 }


}


abstract class B extends A
{
	void m1()
	{
		super.m3();
		System.out.println("m1 define");
	}
	//abstract void m2();

}



class C extends B
{
	void m2()
	{   super.m1();
		System.out.println("m2 define");

	}


}
class Sasta{

public static void main(String args[])
		{
			C c= new C();
			c.m2();
			}
