import java.io.*;
import java.util.*;

class TestClass
{
	public static void main(String args[]) throws Exception
	{
		Scanner fs=new Scanner(System.in);
		int t=fs.nextInt();
		for(int k=0;k<t;k++)
		{
			int n=fs.nextInt();
			int m=fs.nextInt();
			for(int i=0;i<n;i++)
			{
				double cost=100000.0000;
				double min=100001.0000;
				int ans=0;
				for(int j=0;j<m;j++)
				{
					for(int l=0;l<3;l++)
					{
						int d=fs.nextInt();
						cost=cost-cost*((d*1.0)/100);
					}
					if(cost<min)
					{
						min=cost;
						ans=j+1;
					}
				}
				System.out.print(ans+" ");
			}
			System.out.println();
		}
	}
}
