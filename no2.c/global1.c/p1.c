#include<stdio.h>
int main()
{
    int maths[ 5],sci[5],eng[5],total[5],i;
     int avg[5];
   
     for(i=0;i<5;i++)
{
    printf("enter maths marks[%d]",i);
    scanf("%d",&maths[i]);
}
for(i=0;i<5;i++)
{
    printf("enter sci marks[%d]",i);
    scanf("%d",&sci[i]);
}
for (i=0;i<5;i++)
{
    printf("enter eng marks[%d]",i);
    scanf("%d",&eng[i]);
}
for (i=0;i<5;i++)
{
    total[i]=maths[i]+sci[i]+eng[i];
    avg[i]=(float)total[i]/3;
}
printf("\n\tmaths\tsci\teng\ttotal\tgrade\n");
 for (i=0;i<5;i++)
 printf("\n\t%d\t%d\t%d\t%d\t%d\t",maths[i],sci[i],eng[i],total[i],avg[i]);
 if(maths[i]<35|| sci[i]<35|| eng[i]<35)
 {
    printf("fail");
 }
 else if(avg[i]>=75)
 {
    printf("A");
 }
else if (avg[i]>=65)
{
    printf("B");
}
else if (avg[i]>=55)
{
    printf("C");

}
else
{
    printf("D");
}

}




