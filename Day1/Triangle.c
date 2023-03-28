#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle\n");
    scanf("%d %d %d\n",&a,&b,&c);
    printf("%d %d %d",a,b,c);
    if((a+b)>=c && (a+c)>=b && (b+c)>=a)
    {
        printf("Triangle can be formed");
    }
    else
    {
        printf("Triangle cannot be formed");
    }
    return 0;
}
