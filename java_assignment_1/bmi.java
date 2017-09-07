import java.io.*;
class bmi
{
	public static void main(String args[])throws IOException
	{ 
		BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
		double height,weight;
		System.out.println("enter the height in inches and the the weight in pounds");
		height=Double.parseDouble(br.readLine());
		weight=Double.parseDouble(br.readLine());
		weight=0.45359237*weight;
		height=0.0254*height;
		double b=weight/(height*height);
		System.out.println("the bmi is "+ b);
	}
}