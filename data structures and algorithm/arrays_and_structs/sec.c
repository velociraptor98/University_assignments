//to find the secod largest number
#include <stdio.h>
int main()
{
	int n;
	int arr[100];
	printf("how many numbers do you want to compare? ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("the second largest number is : %d ",arr[n-2]);
}