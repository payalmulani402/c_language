#include<stdio.h>
#include<conio.h>
void main()
{
    int eng,guj,total;
    float per;
    printf("enter eng");
    scanf("%d %d ",&eng,&guj);
    total =eng+guj;
    per=total/2;
    printf("total marks : %d",total);
    printf("per is : %2f\n",per);
}
