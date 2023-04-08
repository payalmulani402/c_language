#include<stdio.h>
int main ()
{
	int arr [10],i,n,total=0;
	printf("how many elements you want to 
	   store inside the array");
	scanf("%d",&n);
	printf(" enter any %d array elements:",n);
	for (i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\n value stored at odd position(with 
		array and its index));
	for (i=0;i<n;i++)
	{
		total=total+arr[i];
	  	if (i%2!=0)
	printf("[%d]=%d\n",i,arr[i]);
	printf("\n the sum of total numbwrs are : %d",total);
	}
}