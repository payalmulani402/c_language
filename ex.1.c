#include<stdio.h>
#include<conio.h>
void main()
{
    float r=50,q=200,A,D,B,G,N;
    
    A=r*q;
    D=A*0.05;
    B=A-D;
    G=B*0.18;
    N=B+G;
    printf("total is : %f",A);
    printf("\n printf after discount is =%..2f",D);
    printf("\n total is : %d..2f",B);
    printf("\n gst amount is : %2f",N);
    printf("\n \trate\tqty\tamt\tdis\tbill\tgst\tnet");
    printf("\n\t%..2f\t%..2f\t%..2f\t%..2f\t%..2f\t\t%..2f\t%..2f",r,q,
                                        A,D,B,G,N);
                        
}