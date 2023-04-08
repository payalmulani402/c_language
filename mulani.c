#include<stdio.h>
int perfect()
{
    int i=1, num,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    while (i< num)
{
  if(num %i==0)
  sum =sum+i;
  i++;
}
   if(sum==num)
   printf("\n %d is perfect number",num);
   else
   printf("\n %d is not a perfect number",num);
}
int main()
{
    perfect();
}