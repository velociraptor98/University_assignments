#include <stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	printf("enter the values: ");
	p=&a;
	q=&b;
	scanf("%d%d",p,q);
	int sum=*p+*q;
	int diff=*p-*q;
	printf("the sum is %d and the difference is %d",sum,diff);
}