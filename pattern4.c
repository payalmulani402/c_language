#include<stdio.h>
int main()
{
      char i,j;
       i='A';
         while (i<='E')
        {
           j='A';
           while(j<='E')
         {
               printf("%c",i);
                j++;
          }
              printf("\n");
                 i++;
          }
}