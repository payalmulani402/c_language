#include<stdio.h>
int main()
{
      int i,j;
       i=1;
      while(i<=10)
{
         j=1;
           while(j<=5)
{
        if (i%2==1)
         printf("%d",i);
         j++;
}
       printf("\n");
       i++;
}
}