/*
Question One

Write a C program that sums up the odd and even numbers, respectively, 
from 1 to a given upper bound inclusive (taken as user input). 
The program should then print out the sum of the odd numbers, the sum 
of the even numbers, the absolute difference between the sums, 
a third of the sum of the even numbers and a 5th of the sum of the odd 
numbers. Additionally,if the input upper bound is 0 (zero), you can 
give the user, additional chances to correct the upper bound to be 
greater than or equal to 1, without exiting the program.  
 [2 pts]
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int upperBound;
    printf("Enter a number: ");
    scanf("%d", &upperBound);
    printf("Number: %d \n", upperBound);

    int oddSum = 0;
    int evenSum = 0;

    while (upperBound <= 0){
        printf("Please enter a value greater than 0: ");
        scanf("%d", &upperBound);
        printf("Number: %d \n", upperBound);
    }

    for (int i = 0; i <= upperBound; i++){
        if (i % 2 == 0){
            evenSum += i;
        }else{
            oddSum += i;
        }
    }

    int absolute_difference = abs(evenSum - oddSum);
    int third_evenSum = evenSum / 3;
    int fifth_OddSum = oddSum / 5;

    printf("Sum of even numbers: %d \n", evenSum);
    printf("Sum of odd numbers: %d \n", oddSum);
    printf("Absolute difference of both sums: %d \n", absolute_difference);
    printf("A third of the sum of even numbers: %d \n", third_evenSum);
    printf("A fifth of the sum of odd numbers: %d \n", fifth_OddSum);

    return 0;
}
