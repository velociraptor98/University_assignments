#include <Stdio.h>
int fibo(int n)
{
	if(n==0)
		return 0;
     if(n==1)
		return 1;
		return (fibo(n-1)+fibo(n-2));
}
int main()
{
	int n;
	printf("enter the number of terms in the fibonaaci series: ");
	scanf("%d",&n);
	int last=fibo(n);
	printf("the last term is %d",last);
}