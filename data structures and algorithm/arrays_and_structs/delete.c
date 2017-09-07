//to delete an elemet from an array
#include <stdio.h>
int n;
int arr[100];
void delete(int i);
int main()
{
	printf("how many numbers do you want to enter? ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the positon of the numbeer u want to be deleted (with base 0)::");
	int del;
	scanf("%d",&del);
	delete(del);
}
void delete(int del)
{
	n=n-1;
	for(int i=del;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d   ",arr[i]);
	}

}