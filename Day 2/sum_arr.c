#include<stdio.h>
int main()
{
   int arr[25];
   int n,sum=0,p=0;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       sum+=arr[i];
   }
   for(int i=2;i<=sum/2;i++)
   {
       if(sum%i==0)
       {
           p=1;
       }
   }
   if(p==1)
   {
       printf("Not Prime");
   }
   else
   {
       printf("Prime");
   }
}

