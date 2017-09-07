import java.io.*;
class sdig
{
	public static void main(String args[])throws IOException
	{ 
		BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
		int n;
		n=Integer.parseInt(br.readLine());
		int sum=0;
		while(n!=0){
			int r=n%10;
			sum+=r;
			n/=10;
		}
		System.out.println("the sum of the digits are "+sum);
	}
}