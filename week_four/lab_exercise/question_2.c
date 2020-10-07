// Question 2
//Write a program in C to add numbers using call by reference.
//(This means that you write a function to add two numbers. 
//The inputs of your function should be references to the integers and not values)

#include <stdio.h>

// a function call referencing the address of the argument 
// to be provided when called.
int add(int *a, int *b){
    return *a + *b;
}

void main(){
    int a;
    int *a_pointer;
    int b;
    int *b_pointer;

    printf("Hey the kindly enter one integer:");
    scanf("%d", &a);

    printf("Hey the kindly enter another integer:");
    scanf("%d", &b);

    a_pointer = &a;
    b_pointer = &b;

    printf("The sum is: %d\n", add(a_pointer, b_pointer));
}
