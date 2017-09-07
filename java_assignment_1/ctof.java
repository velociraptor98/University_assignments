import java.io.*;
class ctof
{
	public static void main(String args[])throws IOException
	{ 
		BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
		double c;
		System.out.println("enter the temperature in celcius");
		c=Double.parseDouble(br.readLine());
		double f=((9.0/5)*c)+32;
		System.out.println("the temperature in fahrenheit is "+f);
	}
}