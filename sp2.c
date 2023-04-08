#include<stdio.h>
int main()
{
	int i,j,sp=30;
	i=5;
	while(i>=1)
	{
	j=1;
	    while(j<=5)
	{
 	    printf(" ");
	    j++;
	}
	 j=1;
    	 while(j<=i)
	{
	   printf("*");
	   j++;
	}
	 sp--;
	  printf("\n");
	   i--;
	}
}