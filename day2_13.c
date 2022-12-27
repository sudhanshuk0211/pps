#include<stdio.h>
void print(int a[] )
{
    int m,n,i;
    if(m>0&&i==0)  
   {
    printf("%d",m);
    m-=5;
    print(m,n,0);
   }
   else if (m!=n)
   {
    printf("%d",m);
    m+=5;
    print(m,n,1);
   }
}
   
int main()
{
    int a[20],i=0,n;
    scanf("%d",&n);
    input:
    if(i<n)
    {
        scanf("%d",&a[i]);
        print(a[i],a[i],0);
        printf("%d\n",a[i]);
        i++;
        goto input;
    }
    
    return 0 ;
}