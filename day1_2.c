#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three integers :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is largest",a);
    }
    else if(b>c)
    {
        if(b>a)
        printf("%d is largest \n",b);

    }
    else if(c>a)
    {
        if(c>b)
        printf("%d is largest\n",c);
    }
}