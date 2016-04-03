import java.util.*;
import java.io.*;

class TestClass
{
	public static void main(String args[]) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int i=0;i<t;i++)
		{
			String s=br.readLine();
			int r=0,k=0,ans=0;
			for(int j=0;j<s.length();j++)
			{
				if(s.charAt(j)=='R')
					r++;
			}
			for(int j=s.length()-1;j>=0;j--)
			{
				if(s.charAt(j)=='K')
					k++;
				else
					r--;
				if(k==r)
				{
					ans=k+r;
					break;
				}
			}
			System.out.println(ans);
		}
	}
}