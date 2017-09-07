//printing 2d array using a pointer
#include <stdio.h>
int main()
{
	int arr[100][100];
	int n,m;
	printf("enter the rows and columns: ");
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d",*(*(arr+i)+j));
		}
	}
}