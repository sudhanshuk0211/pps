#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,c,d;
    printf("enter the value of a :\n");
    scanf("%d",&a);
    printf("enetr the value of b :\n");
    scanf("%d",&b);
    printf("enter the value of k :\n");
    scanf("%d",&k);
    d = pow(a,b);
    while (d>0)
     {
      a = 0;
      a = d%10;
      d = d/10;
      c++;
      if(c==k)
      break;
     }
     printf("%d",a);
}