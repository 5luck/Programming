#include <stdio.h>
void swap(int* a, int* b);
void swap(int* a, int* b){
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
     int a;
     int b;
     printf("Enter the value of a & b: ");
     scanf("%d %d",&a,&b);
     swap(&a, &b);
     printf("The swapped value of a is %d & b is %d", a, b);
    return 0;
}