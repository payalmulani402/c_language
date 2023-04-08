#include<stdio.h>
struct bill
{
    float rate,qty,Amount,Dis,Bill,Gst,Netbill;
    char prodname[50];
    int codeno;
};
int main()
{
    struct bill a[5];
    int i;
    for(i=0;i<1;i++)
    {
        printf("enter the prodname:");
        scanf("%s",&a[i].prodname);
        printf("enter the codeno:");
        scanf("%d",&a[i].codeno);
        printf ("enter the rate:");
        scanf("%f",&a[i].rate);
        printf("enter the qty:");
        scanf("%f",&a[i].qty);
        
    }
    printf("productname\tcodeno\trate\tqty\tamt\tdis\tbill\tgst\tnetbill\n");
    for (i=0;i<1;i++)
    {
        a[i].Amount=a[i].rate*a[i].qty;
        a[i].Dis=a[i].Amount*0.05;
        a[i].Bill=a[i].Amount-a[i].Dis;
        a[i].Gst=a[i].Bill*0.18;
        a[i].Netbill=a[i].Bill + a[i].Gst;
        printf("%s\t\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",a[i].prodname,
                a[i].codeno,a[i].rate,a[i].qty,a[i].Amount,a[i].Dis,a[i].Bill,a[i].Gst,
                                a[i].Netbill);

    }
}   