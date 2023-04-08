#include<stdio.h>
int maths,sci,eng,total;
float per;
int display()
{
    printf("maths\tsci\teng\ttotal\tper\n");
    printf("%d\t%d\t%d\t%d\t%2f",maths,sci,eng,total,per);

}
  int calc()
  {
    total=maths+sci+eng;
    per=(float)total/3;
    display();
  } int setdata()
  {
    printf("enter maths marks:");
    scanf("%d",&maths);
    printf("enter sci marks:");
    scanf("%d",&sci);
    printf("enter eng marks:");
    scanf("%d",&eng);
    calc();
  }
  int main()
  {
    setdata();
  }