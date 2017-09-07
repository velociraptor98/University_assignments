#include <Stdio.h>
int main()
{
	int a,b,*c,*d;
	c=&a;
	d=&b;
	printf("enter the 2 number to be subtracted: ");
	scanf("%d %d",c,d);
	int sub=*c-*d;
	printf("the result is : %d",sub);
}