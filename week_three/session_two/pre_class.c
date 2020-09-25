/*
Short test to see if this code compiles on another computer.
*/


#include <stdio.h>
#include <stdlib.h>

int add(number_a, number_b){
    return number_a + number_b;
}

int subtract(number_a, number_b){
    return number_a - number_b;
}

int divide(number_a, number_b){
    return number_a/number_b;
}

int multiply(number_a, number_b){
    return number_a * number_b;
}

void main(){
    int number_a;
    int number_b;
    printf("Hello there! What number I'm thinking about? ");
    scanf("%d", &number_a);

    printf("Hello there! What number I'm thinking about? ");
    scanf("%d", &number_b);

   printf("The result of adding these two numbers is: %d \n", add(number_a, number_b));
}
