#include<stdio.h>
int main()
{
    int a=20,*p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf("value of a is :%d",a);
    printf("\n address of a is :%u",&a);
    printf("\n address of a using p is :%d",p);
    printf("\n address of p is :%u",&p);
    //printf("\n value of a using p is:%d",*p);
    printf("\n address of p  using q is :%d",q);
    printf("\n address of a is : %u",&q);
    //printf("\n value of a using q is : %d",**q);
    printf("\n address of Q using r is :%d",r);
    printf("\n address of r is : %u",&r);
    printf("\n value of a using r is : %d",***r);
}