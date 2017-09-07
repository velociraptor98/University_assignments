#include <stdio.h>
void fibol(int n)
{   static unsigned long a=0,b=1;
	unsigned long c=0;
	if(n>0)
	{
		c=a+b;
		printf("%ld ,",c);
		a=b;
		b=c;
		fibol(n-1);
	}
}
int main()
{
	int n;
	printf("enter the terms of the fibonacci series: ");
	scanf("%d",&n);
	printf("%d, %d ,",0,1);
	fibol(n-2);
}