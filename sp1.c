#include<stdio.h>
int main()
{
	int i,j,sp=25;
	i=1;
	while(i<=5)
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
	     i++;
}

}