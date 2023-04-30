// sleep method

import java.lang.*;
class TestSleep
{
	static void print1()
	//String str="";
	{   int x=1000;
		for(int j =1;j<=10;j++)
		{
			try
			{
			Thread.sleep(x);
			char ch;
			String s1="";
			String str="I AM KUCHI U ARE GHTIYA..."+"i am a good girl... very kuchi girl ...very very kuchi.... baaki koi kuchi nhi hai... hihihi";
			for(int i=0;i<str.length();i++)
			{
				ch=str.charAt(i);
				System.out.print(ch);
				Thread.sleep(100);
			}
			//System.out.println("I am kuchi  AND I AM KUCHI U ARE GHTIYA...");
			//System.out.println("i am a good girl... very kuchi girl ...very very kuchi.... baaki koi kuchi nhi hai... hihihi");
			//Thread.sleep(x);
			//System.out.print("LOVE ");
			//Thread.sleep(x);
			//System.out.println("YOU");
		}
			/*Thread.sleep(x);
			System.out.println(i);
			}*/
			catch(Exception e)
			{
				System.out.println(e);
			}
			//x=x-10;
		}
	}

	public static void main(String args[])
	{
		TestSleep.print1();
		//System.out.println(10000);

	}

}
