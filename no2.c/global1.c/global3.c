#include<stdio.h>
void sum()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("eligible  for vote:%d",age);
    }
    else
    {
        printf("not eligible for vote :%d",age);
    }
}
    int main()
    {
        sum();
    }
    
