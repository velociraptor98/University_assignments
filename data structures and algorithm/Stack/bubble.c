#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("enter the size of the array :");
	scanf("%d", &n);
	int *arr = (int *)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
    }
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}