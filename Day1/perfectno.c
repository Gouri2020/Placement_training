#include<stdio.h>
void main()
{
    int n,i;
    int sum=0;
    printf("Enter the no: \n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not a perfect number");
    }
    return 0;
}
