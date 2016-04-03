import java.io.*;
import java.util.*;

class TestClass
{
	public static void main(String args[]) throws Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		//System.out.println("1");
		for(int i=0;i<t;i++)
		{
			int n=sc.nextInt();
			int a[]=new int[n];
			int b[]=new int[n];
			for(int j=0;j<n;j++)
			{
				//System.out.println(j);
				a[j]=sc.nextInt();
			}
			for(int j=0;j<n;j++)
			{
				//System.out.println("2 "+j);
				b[j]=sc.nextInt();
			}
			int count=0;
			sc.nextLine();
			String name=sc.nextLine();
			for(int j=0;j<n;j++)
			{
				if(a[j]!=b[j])
					count++;
			}
			 if(count%2==0)
			{
				if(count==2 && count==n)
					System.out.println("Devu");
				else if(name.equals("Devu") && count==2)
					System.out.println("Devu");
				else
					System.out.println("Churu");
			}
			else
			{
				if(count==n && count==3 && name.equals("Churu"))
					System.out.println("Devu");
				else
					System.out.println("Churu");
			}


		}
	}
}