import java.io.*;
class points{
	double x,y;
	points()
	{
		x=0.0;
		y=0.0;
	}
	points(double x,double y)
	{
		this.x=x;
		this.y=y;
	}
	public double dist(points p,points q)
	{
		double d;
		d=Math.sqrt(Math.pow((q.x-p.x),2)+Math.pow((q.y-p.y),2));
		return d;
	}
}
class geom
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		double a,b;
		points p,q;
		System.out.println("enter the x and y co ordinates");
		a=Double.parseDouble(br.readLine());
		b=Double.parseDouble(br.readLine());
		p=new points(a,b);
		System.out.println("enter the x and y co ordinates");
		a=Double.parseDouble(br.readLine());
		b=Double.parseDouble(br.readLine());
		q=new points(a,b);
		points z=new points();
		double res=z.dist(p,q);
		System.out.println("the distance is "+res);
	}
}