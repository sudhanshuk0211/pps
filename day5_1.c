#include<stdio.h>
void chocolate(int a[] , int l)
{
     int i ,mid=0;
    int f=0;
    if(l%2==0)
    {
        mid=(f+l)/2;
    }
    else
    {
        mid =(f+l)/2;
    }
    printf("the laast peice of chocolate is %d",a[mid]);
}
void main()
{
    int a[10],l,i;
    printf("enter the lenght of the array\n ");
    scanf("%d",&l);
    printf("enter the values in array\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    chocolate(a,l);
}