k k mkmmmmmmmmmmm#include<stdio.h>
int main ()
{
    char  arr1[55],arr2[55];
    int i,j,k;
    printf("enter the name:");
    gets(arr1);
    for (i=0;arr1[i]!='\0';i++);

        printf("\n reverse string: %d",i);
    k = i;        // printf("\n reverse string: %d",k);

    for(j=0;j<i;j++)
    {
        arr2[j] = arr1[--k];
    }
    arr2[j] = '\0';
    
        printf("\n reverse string: %s",arr2);
}






// for (i=0;i<k;i++)
    // {
    //     arr1[i]='\0';
    //     printf("\n reverse string :%s",arr2);
    // }