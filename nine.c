#include<stdio.h>
int main()
{
    int a,b,sum,t;
    a=100;
    b=200;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Before swappping:a=%d,b=%d",a,b);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("After swappping:a=%d,b=%d",a,b);
}