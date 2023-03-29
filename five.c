#include<stdio.h>
int main()
{
    int a=12;
    int *ptr;
    ptr=&a;
    printf("Address of a direct :%p\n",&a);
    printf("Addresss of a using pointer:%p\n",ptr);
    printf("Value of a:%d\n",a);
    printf("Value of a using pointer:%d",ptr);
}