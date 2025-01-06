// Takes a string input from the user (maximum length 100 characters).
// Counts and displays the number of:
// Vowels.
// Consonants.
// Digits.
// Special characters.
// Sorts the string alphabetically (ignoring case) and prints the sorted string.
// Implements all string operations (counting and sorting) using separate functions.
#include <stdio.h>
#include <string.h>
int v();
int c();
int d();
int s();
int main()
{
    char a[100];
     printf("Enter a string: ");
     gets(a);
     printf("no of vowels are %d",v());
    return 0;
}
int v(){
    char a[100];
    int i=0;
    for(i=0;i<=100;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            i++;
        }
    }
    return i;
}
