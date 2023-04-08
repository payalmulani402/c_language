#include<stdio.h>
int main ()
{
    char arr1[20];
    int i,len;
    printf("enter your string \n");
    gets(arr1);
    for (i=0;arr1[i]!='\0';i++)
{
    len++;
}
    printf("\n reverse string is :");
    for (;len>=0;l
    len--)
    {
        printf("%c",arr1[len]);

    }
} 