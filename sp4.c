#include<stdio.h>
int main()
{
	int i,j,row;
	printf(" enter the row :");
	scanf("%d%d",&row);
	i = 1;
	while(i<=row)
	{
		j=1;
		while(j<=row)
		{
		    if(i==row || j== 1 || j==2*i-1)
			{
			printf("*");
			}
               {    j=1;
             while(j<=2*i-1)

              }
		    else
			{
			printf(" ");
                        j++;  
			}
		   j++;
		}
	   i++;
	printf("\n");
	}
}