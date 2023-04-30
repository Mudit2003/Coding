// multithreading
import java.lang.*;


//by extending the Thread class
class Test extends Thread
{
	public void run()
	{
		System.out.println("thread -- by extending thread class");
	}

	/*public void start()
	{
		System.out.println("start method inside test class");
	}*/

	/*public void run(int a)
	{
	    System.out.println("thread -- by extending thread class "+a);
	}*/

	public static void main(String args[])
	{
		Test t= new Test();
		t.start();

		//t.start();   //--- IllegalThreadStateException --- once it reached dead state it can,t be re-alive

		/* t.start(10);
		   method start in class Thread cannot be applied to given types;
				t.start(10);
				 ^
		   required: no arguments
		   found:    int
           reason: actual and formal argument lists differ in length
        */

	}

}

/*
// by implementing the runnable interface
class Test implements Runnable
{
	public void run()
	{
		System.out.println("thread -- by extending thread class");
	}
	public static void main(String args[])
	{
		Test t= new Test();
		Thread th=new Thread(t);
		th.start();
	}

}*/