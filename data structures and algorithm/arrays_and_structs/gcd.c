#include <Stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);
}
int main(){
	int res;
	printf("enter the 2 numbers you want to find the gcd of :");
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	 res=gcd(a,b);
	else
	 res=gcd(b,a);
	printf("the gcd is %d",res);
}