#include<stdio.h>
#include<math.h>
void main()
{
   int a=0,s=0,n;
   printf("enter the value of a:\n");
   scanf("%d",&n);
   while(n>0||s<9)
   {
    a=n%10;
    n=n/10;
    s=s+a;
    if(s>10)
    {
        n=s;
    }
   }
   printf("%d",s);
}
    
