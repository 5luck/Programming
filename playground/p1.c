// Asks the user to enter 10 integers and stores them in an array.
// Calculates and displays the following:
// The sum of all integers.
// The average of the integers.
// The maximum and minimum values.
// Implement the calculations (sum, average, max, min) in separate functions.
#include <stdio.h>
int a[10];
int sum(int sum);
float avg(float avg);
int min(int min);
int max(int max);
int main()
{
    for(int i=0;i<10;i++){
        printf("Enter %d element of the array: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The elements of array are: ");
    for(int i=0;i<10;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
