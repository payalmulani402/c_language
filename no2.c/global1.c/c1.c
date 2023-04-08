#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&b<c)
    {
        printf("largest on is :%d",a,c);
    }
    else
    {
        printf("large on is :%d",a,c);
    }
    if (c>a)
    {
       printf("large on is : %d",c,a);
    }
    else
    {
        printf("not large on is : %d",c,a);
    }
}