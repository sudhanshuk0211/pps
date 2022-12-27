#include <stdio.h>
void perfect(int n)
{
    int i,r=0,s=0;
    
    for(i=1;i<n;i++)  
    {  
        r=n%i;  
        if (r==0)  
        {  
            s=s+i;  
        }  
    }  
    if (s==n)  
        printf(" %d is a Perfect Number",n);  
    else  
        printf("\n %d is not a Perfect Number",n);  
}
void main()
{
    int n=0;
    printf("Enter the number to check if it is perfect or not\n");
    scanf("%d",&n);
    perfect(n);
}