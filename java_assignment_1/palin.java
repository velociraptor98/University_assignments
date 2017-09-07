import java.io.*;
class palin
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n,temp;
		System.out.println("Enter the number");
		n=Integer.parseInt(br.readLine());
		temp=n;
		int rev=0;
		while(n!=0)
		{
			rev=rev*10+(n%10);
			n=n/10;
		}
		if(rev==temp)
			System.out.println("it is a palindrome");
		else
			System.out.println("it is not a palindrome");
	}
}