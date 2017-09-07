//to find the smallest number
#include <stdio.h>
int main()
{
	int arr[100];
	int n=0;
	printf("how many numbers do you want to enter: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    }
    int smallest=360000;
    int smallpos=0;
    for(int i=0;i<n;i++){
    	if(arr[i]<smallest)
    	{
    		smallest=arr[i];
    		smallpos=i;
    	}
    }
    printf("the smallest number is %d and its position is %d",smallest,smallpos);
}