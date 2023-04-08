#include<stdio.h>
int main()
{
 	int i,j,k=1;
	i=1;
	while(i<=5)
	{
	  j=1;
	 while(j<=i)
	{
	if(k%2==0)
	  printf("0");
	else
	 printf("1");
	k++;
	j++;
	}
	 printf("\n");
	i++;
	}
}