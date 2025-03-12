//Write a program having a variable "i". Print the address of "i". Pass this variable
//to a function and print its address. Are these addresses same? Why?
#include <stdio.h>

// Function prototype
void printAddress(int *ptr);

int main() {
    int i = 10;  // Declaring variable i
    
    // Printing address of i from main function
    printf("Address of i in main(): %p\n", (void*)&i);
    
    // Passing address of i to function
    printAddress(&i);
    
    return 0;
}

void printAddress(int *ptr) {
    // Printing address stored in ptr
    printf("Address of i in printAddress(): %p\n", (void*)ptr);
}