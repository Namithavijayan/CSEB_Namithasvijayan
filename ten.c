#include<stdio.h>
int main()
{
    int n,m,a[10][10];
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
    printf("The matrix :\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
              printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

}