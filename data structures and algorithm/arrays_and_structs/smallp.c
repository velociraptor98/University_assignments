#include <Stdio.h>
int main()
{
	int a=0,b=0,c=0,*e,*f,*g;
	printf("enter the 3 numbers to be compared :");
	scanf("%d %d %d",&a,&b,&c);
	e=&a;
	f=&b;
	g=&c;
	if(*e<*f&&*e<*g)
	{
		printf("%d is the smallest: ",*e);
	}
	else if(*f<*e&&*f<*g)
	{
		printf("%d is the smallest: ",*f);
	}
	else
		printf("%d is the smallest: ",*g);
}