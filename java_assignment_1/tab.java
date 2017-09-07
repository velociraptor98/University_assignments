import java.io.*;
class tab
{
	public static void main(String args[])throws IOException
	{
		System.out.println("a\tb\tpow(a,b)");
		for(int i=1;i<=5;i++)
		{
			System.out.println(i+"\t"+(i+1)+("\t")+((int)(Math.pow(i,i+1))));
		}
	}
}