#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);

if (year%4==0)
{
    printf("leap year on is : %d",year);
}
else
{
     printf("not leap year on is:%d",year);
}
}  