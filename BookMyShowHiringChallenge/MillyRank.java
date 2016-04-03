import java.io.*;
import java.util.*;

class TestClass
{
	public static void main(String args[]) throws Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
			long n=sc.nextLong();
			long x=sc.nextLong();
			long y=sc.nextLong();
			if(n-x>y+1)
				System.out.println(y+1);
			else
				System.out.println(n-x);
			
		}
	}
}