#include<stdio.h>
void main ()
{
    int a[10]={0},b[10]={0},c[10]={0},n=0,i,l,j=0,k=0,sum=0,sum1=0,p=1;

    printf("enter the number of elements in array");
    scanf("%d",&n);
    printf("enter the number of elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    l=(n/2);
    for(i=0;i<l;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=l;i<n;i++)
    {
        c[k]=a[i];
        k++;
    }
    
    for(i=0;i<j;i++)
    {
       sum=sum+b[i];
    }
     for(i=0;i<k;i++)
    {
       sum1=sum1+c[i];
    }
    p=sum*sum1;
    printf("%d",p);

}
