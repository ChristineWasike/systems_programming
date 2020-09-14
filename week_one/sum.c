/*
Question Two

Write a program that prompts the user for a positive 
integer and then computes the sum of all the digits of 
the number. For example, if the user enters 2784, then 
the program reports 21. If the user enters 59, then the 
program reports 14. The program should work for any 
number having one to ten digits.   [3 pts]
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int input;
    printf("Enter a positive number: ");
    scanf("%d", &input);
    printf("Number: %d \n", input);

    while (input <= 0){
        printf("Please enter a value greater than 0: ");
        scanf("%d", &input);
        printf("Number: %d \n", input);
    }

    int sum = 0;
    while (input != 0){
        sum += (input % 10);
        input /= 10;
    }

    printf("Sum of digits in the number are: %d \n", sum);    
    return 0;
}
