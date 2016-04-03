import java.io.*;
import java.util.*;
import java.math.*;

class TestClass
{
	public static void main(String args[]) throws Exception
	{
		Scanner sc=new Scanner(System.in);
		BigInteger a=sc.nextBigInteger();
		BigInteger b=sc.nextBigInteger();
		
		
		BigInteger con=new BigInteger("2");
		BigInteger one=new BigInteger("1");
		b=b.multiply(b.add(one));
		b=b.divide(con);

		a=a.multiply(a.subtract(one));
		a=a.divide(con);

		BigInteger ans=b.subtract(a);
		System.out.println(ans);
	}
}