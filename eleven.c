#include<stdio.h>
int main()
{
    int n,m,a[10][10],k;
    int i,j;
    printf("Enter row and column size");
    scanf("%d%d",&n,&m);
    printf("Enter the matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
              scanf("%d",&a[i][j]);
        }
    
    }
    printf("The matrix' diagonal elements  :\n");
    if(i==j)
    {
        for(i=0;i<n;i++)
        {
              printf("%d  ",a[i][i]);
        
        }
    }
    else
       printf("Not a square matrix");
    printf("\nUpper delta:\n");   
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
           printf("   ");
        for(j=i+1;j<m;j++)
        {
              printf("%d  ",a[i][j]);
        }
        printf("\n");
      
       
    }    
     printf("\nLower delta:\n");   
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
              printf("%d  ",a[i][j]);
        }
        printf("\n");
    }   
    


}