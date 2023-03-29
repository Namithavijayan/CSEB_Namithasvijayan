#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int a=0,b=0,i;
    printf("Enter the string");
    scanf("%s",str);
    for( i=0;str[i]!='\0';i++)
    {
        if(str[i]=='#')
           a=a+1;
        else if(str[i]=='*')  
           b=b+1; 

    }
    if(a==b)
      printf("String is valid with value:%d",a-b);
    else
    {
      printf("string is not valid \nvalue:%d\n After making string valid",a-b);  
      printf("%s",str);
      for(i=0;i<abs(a-b);i++)
      {
        if((a-b)<0)
           printf("#");
        else 
           printf("*");   
      }
    }  
}