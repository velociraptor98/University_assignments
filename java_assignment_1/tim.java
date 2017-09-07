import java.io.*;
class tim
{
	public static void main(String args[])throws IOException
	{ 
		BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
		int min;
		min=Integer.parseInt(br.readLine());
		double days=(1.0/1440)*min;
		double years=(1.0/(365*24*60))*min;
		System.out.println("the number of days are "+days+" and the number of years are "+years);
	}
}