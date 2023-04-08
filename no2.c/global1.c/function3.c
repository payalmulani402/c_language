#include<stdio.h>
int fun (int arr[],int n)

{
   int min=0,max=0;
   if (n==1)
   {
   min=max=arr[0];
   }
   if (arr[0]>arr[1])
   {
   max=arr[0];
   min=arr[1];
   }
   else
   {
      max=arr[0];
      min=arr[1];
   }
   for(int i=2;i<n;i++)
   {
      if (arr[i]>max)
         max=arr[i];
         else if (arr[i]<min)
         min=arr[i];
   }
   printf("minimum element is :%d",min);
   printf("\n maximum element is :%d",max);
}
   int main()
   {
      int arr[]={67,87,44,78,90,76,43,22,78,657,8975,564,90,2};
      int n=15;
      fun (arr,n);
   }