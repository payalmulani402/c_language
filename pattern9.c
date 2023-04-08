#include<stdio.h>
int main()
{
    int i,j,k=11;
     i=1;
       while(i<=5)
{
       j=1;
       while(j<=5)
{
       printf("%d",k++);
       j++;
}
       printf("\n");
       i++;
}
}