//insert an element in an array
#include <stdio.h>
int main()
{
	int arr[100];
	int n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number u want to insert: ");
	int ins;
	scanf("%d",&ins);
	printf("specify the address to insert the element: ");
	int pos;
	scanf("%d",&pos);
	for(int i=n;i>=pos;i--)
	{
		arr[i+1]=arr[i]; 
	}
	++n;
	arr[pos]=ins;
	for(int i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
}