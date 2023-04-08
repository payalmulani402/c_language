#include<stdio.h>
int main()
{
     int i,j;
     char a='a';
      i=1;
       do
    {
       j=1;
        do
    {
     if(j%2==0)
     printf("%c",a-32);
     printf("%c",a);
      j++;
     }
      while (j<=1);
     printf("\n");
      i++;
     }
     while(i<=5);
}  