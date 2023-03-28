#include <stdio.h>

int main()
 {
    int arr[20];
    int i, n,j, temp;
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
return 0;
}
