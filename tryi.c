#include<stdio.h>
void main()
{
    int i,j,n,c=0;
    printf("enter the number of rows");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            c=j+1;
            printf("%d",c);
        }
        printf("\n");
    }
}