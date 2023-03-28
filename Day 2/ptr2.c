int main() {
    // Write C code here
    int x=5;
    int y=6;
    int *ptr1;
    int *ptr2;
    ptr1=&x;
    ptr2=&y;
    int *temp;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;



   printf("x: %d\n",*ptr1);
   printf("y:%d\n",*ptr2);
   return 0;
}
