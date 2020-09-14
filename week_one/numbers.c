#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
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
