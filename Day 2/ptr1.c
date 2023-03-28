#include <stdio.h>

int main() {
    // Write C code here
    int x=5;
    int y=6;
    int *ptr1;
    int *ptr2;
    ptr1=&x;
    ptr2=&y;
    int sum=*ptr1+*ptr2;


   printf("Sum: %d\n",sum);
   return 0;
}
