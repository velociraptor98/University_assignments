import java.io.*;
class grat
{
	public static void main(String args[])throws IOException
	{ 
		BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
		double st,gr;
		System.out.println("enter the gr rate and subtotal");
		gr=Double.parseDouble(br.readLine());
		st=Double.parseDouble(br.readLine());
		gr=(gr/100)*st;
		System.out.println("the gratutity rate is "+gr+"and the total is"+(gr+st));
	}
}
		