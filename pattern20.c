#include<stdio.h>
int main()
{
     int i,j;
     char ch='A';
     i=1;
      do
     {
        j=1;
        do 
      {
         printf("%d",ch++);
          j++;
      }
       while(j>=i);
        printf("\n");
         i++;
      }
         while(i<=5);
}