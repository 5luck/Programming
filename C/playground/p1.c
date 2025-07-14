// Asks the user to enter 10 integers and stores them in an array.
// Calculates and displays the following:
// The sum of all integers.
// The average of the integers.
// The maximum and minimum values.
// Implement the calculations (sum, average, max, min) in separate functions.
#include <stdio.h>
int a[10];
int sum();
float avg();
int min();
int max();
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
    printf("\nThe sum of elements is %d",sum());
    printf("\nThe average of elements is %.1f",avg());
    printf("\nThe maximum among these elements is %d",max());
    printf("\nThe minimum among these elements is %d",min());
    return 0;
}
int sum(){
    int total=0;
    for(int i=0;i<10;i++){
        total+=a[i];
    }
    return total;
}
float avg(){
    float total=0.0;
    for(int i=0;i<10;i++){
        total+=a[i];
}
return total/10;
}
int max(){
    int m=a[0];
    for(int i=1;i<10;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}
int min(){
    int m=a[0];
    for(int i=1;i<10;i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    return m;
}