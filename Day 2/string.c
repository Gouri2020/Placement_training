#include <stdio.h>
#include <string.h>

int main()
{
    int h = 0;
    char str[20];
    int i, len;

    printf("Enter the string : ");
    scanf("%s", str);

    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == '#')
        {
            h++;
        }
        else
        {
            h--;
        }
    }

    printf("%d", h);
    return 0;

}
