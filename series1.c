#include<stdio.h>
#include<math.h>
void main()
 {
    int i,n,x,j,fact=1;
    float sum=1 ,s1=0,s2=0;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the range");
    scanf("%d",&n);
    for(i=1;i<=n;i++)

     {
        fact = fact*i;
        if(i%2==0)
        {
        s1=s1+((pow(x,i))/fact);
        }
        else
        {
        s2=s2+((pow(x,i))/fact);
        }

     }
     
    sum = sum +s2-s1;
    printf("%f",sum);
 }