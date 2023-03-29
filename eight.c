#include<stdio.h>
int main()
{
    int a,b,sum,t,k;
    a=100;
    b=200;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    k= *p2/(*p1);
    printf("After dividing %d",k);
}