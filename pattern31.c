#include<stdio.h>
int main ()
{

       int i,j,row;
       printf(" enter the row ");
       scanf("%d",&row);
       i=1;
	while(i<=row)
	{
		j=i;
		while(j<=row)
		{
			printf(" ");
			j++;
		}
		j=1;
		while(j<=2*i-1)
		{
			if(i==row || j == 1 || j == 2*i-1)
				printf("*");
			else
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}


}    