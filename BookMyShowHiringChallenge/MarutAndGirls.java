
import java.util.*;
import java.io.*;

class TestClass
{
	public static void main(String args[]) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int m=Integer.parseInt(br.readLine());
		LinkedHashSet hs=new LinkedHashSet();
		String q=br.readLine();
		StringTokenizer tk=new StringTokenizer(q);
		for(int i=0;i<m;i++)
			hs.add(tk.nextToken());
		int n=Integer.parseInt(br.readLine());
		int ans=0,c=0;
		for(int i=0;i<n;i++)
		{
			c=0;
			q=br.readLine();
			tk=new StringTokenizer(q);
			while(tk.hasMoreTokens())
			{
				if(hs.contains(tk.nextToken()))
					c++;
			}
			if(c==m)
				ans++;
		}
		System.out.println(ans);
	}	
}