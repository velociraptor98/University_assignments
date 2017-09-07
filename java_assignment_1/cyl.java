import java.io.*;
class cyl
{
	public static void main(String args[])throws IOException
	{ 
		BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
		double length,radius;
		length=Double.parseDouble(br.readLine());
		radius=Double.parseDouble(br.readLine());
		double area=radius*radius*3.14;
		double volume=area*length;
		System.out.println("the area is "+area+"and the volume is "+volume);
	}
}