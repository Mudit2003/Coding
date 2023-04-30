//performing multiple task with multiple thread

class Test1 extends Thread
{
	public void run(){
	System.out.println("test1 thread");}
}
class Test2 extends Thread
{
	public void run(){
	System.out.println("test2 thread");}
}
class Test3 extends Thread
{
	public void run(){
	System.out.println("test3 thread");}
}
class Test4 extends Thread
{
	public void run(){
	System.out.println("test4 thread");}
}
class Test5 extends Thread
{
	public void run(){
	System.out.println("test5 thread");}
}
class Test6 extends Thread
{
	public void run(){
	System.out.println("test6 thread");}
}
class Test7 extends Thread
{
	public void run(){
	System.out.println("test7 thread");}
}
class Test8 extends Thread
{
	public void run(){
	System.out.println("test8 thread");}
}
class Test9 extends Thread
{
	public void run(){
	System.out.println("test9 thread");}
}
class Test10 extends Thread
{
	public void run(){
	System.out.println("test10 thread");}
}
class MultiThread
{
	public static void main(String args[])
	{
	Test1 t1=new Test1();
	t1.start();
	Test2 t2=new Test2();
	t2.start();
	Test3 t3=new Test3();
	t3.start();
	Test4 t4=new Test4();
	t4.start();
	Test5 t5=new Test5();
	t5.start();
	Test6 t6=new Test6();
	t6.start();
	Test7 t7=new Test7();
	t7.start();
	Test8 t8=new Test8();
	t8.start();
	Test9 t9=new Test9();
	t9.start();
	Test10 t10=new Test10();
	t10.start();
    }
}