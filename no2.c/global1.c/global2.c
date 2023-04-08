#include<stdio.h>
int display(int m,int s,int e,int total,float per)
{
    printf("maths\tsci\teng\ttotal\tper\t grade\n");
    printf("%d\t%d\t%d\t%d\t%.2f\t",m,s,e,total,per);
    if (m<35|| s<35|| e<35)
{
   printf("fali");
}
else if (per>70)
{
    printf("A");
} 
else if (per >60)
{
    printf("B");
}
else if (per >50)
{
    printf("C");

}
else 
{
    printf("D");
}
}
int calc(int m,int s,int e)
{
    int total;
    float per;
    total=m+s+e;
    per=(float)total/3;
    display (m,s,e,total,per);
}
int setdata()
{
 int maths ,sci,eng;  
printf("enter maths marks");
scanf("%d",&maths);
printf("enter sci marks");
scanf("%d",&sci);
printf("enter eng marks");
scanf("%d",&eng);
calc(maths,sci,eng);
}
int main()
{
    setdata();
}
 