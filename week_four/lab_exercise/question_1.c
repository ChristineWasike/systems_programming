#include <stdio.h>
void main(){
    // Declaring two integral variables
    int first, second;

    // Declaring two pointers that will store the base addresses of first and second respectively.
    int *p, *q;

    // Declaring a value to store the sum
    int sum;
    
    // Collecting user input: two numbers and defining the Integral variables
    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);
    
    // Defining the two pointers with the addresses of the two integral variables
    p = &first; 
    q = &second;

    // Observing the base addresses of first and second
    printf("p = %p \n", p);
    printf("q = %p \n", q);

    // Summing  up the values of first and second
    sum = *p + *q;

    // Priniting the sum
    printf("Sum of the numbers = %d\n", sum);
}
