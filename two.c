#include<stdio.h>
int main()
{
     int n=5,num=1;
     while(num<=2*n)
     {
        //printf("%d",num);
        if(num%2==1)
          printf("%d",num);
        num=num+1;
     }
}