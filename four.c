#include<stdio.h>
int main()
{
   int a[10],sum=0,n,i;
   printf("Enter the array size");
   scanf("%d",&n);
   printf("Enter the array");
   for( i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
      sum=sum+a[i];
   }
   
   for(i=2;i<=sum/2;i++)
   {
    
      if(sum%i==0)
         break;
   }
   
   if(i==(sum/2)+1)
      printf("Is a prime");
   else 
      printf("Not prime");   


   
}