#include<stdio.h>
void main()
{
    float a=20,b=30;
    printf("\n variable =%.f,b variable = %.f",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a variable= %.f,b variable= %.f",a,b);

}