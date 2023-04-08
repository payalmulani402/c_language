#include<stdio.h>
int main()
{
     int i,j;
     char ch='A';
     i=5;
     do
   {
      j=5;
       do
   { 
        printf("%c",ch++);
         j--;
    }
        while (j>=i);
         printf("\n");
         i--;
     }
         while(i>=1);
}
  