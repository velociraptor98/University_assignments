//to delete the duplicate from an array
#include<stdio.h>
 
int main() {
   int arr[100],n;
 
   printf("Enter array size : ");
   scanf("%d", &n);
 
   printf("Enter the Numbers : ");
   for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
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

   
   for(int i=0;i<n;i++){
      if(arr[i]==arr[i+1])
      {
         int j=i;
         while(j<n-1)
         {
            arr[j]=arr[j+1];
            ++j;
         }
         --n;
      }
   }
   for(int i=0;i<n;i++)
   {
      printf("%d   ",arr[i]);
   }
}




 
  
