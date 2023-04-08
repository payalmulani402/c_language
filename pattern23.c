#include<stdio.h>
int main()
{
    int i,j;
    i=1;
     while(i<=5)
    {
      j=i;
       while(j<=1)
    {
     printf("%c",'A'+j-1);
     j--;
    }
     printf("\n");
     i++;
    }
}