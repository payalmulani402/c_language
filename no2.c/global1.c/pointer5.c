#include<stdio.h>
int main()
{
    int c,d,*a,*b,x;
    printf("enter the c : ");
    scanf("%d",&c);
    printf("enter the d:");
    scanf("%d",&d); 
    printf("\nc=%d and d=%d\n",c,d);
     a=&c;
     b=&d;
     x=*a;
    *a=*b;
    *b=x;
    printf("\nc=%d and d=%d\n",c,d);
    }