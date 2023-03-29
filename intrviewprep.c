#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5,i=0,s=0,p,r;
    while( n>0)
    {
        r=n%10;
        p=8^i;
        s=s+p*r;
        i=i+1;
        n=n/10;

    }
    printf("%d",s);
}