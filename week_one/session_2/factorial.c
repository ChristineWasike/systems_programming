#include <stdio.h>

int main()
{
    // Declaring a variable to store the number(input) from the user
    int number;
    do
    {
        printf("Enter a positive number:");
        //Storing the user input
        scanf("%d", &number);
    } while (number < 0);

    // Initializing the factorial as 1
    int factorial = 1;

    // Iterating through the number down to 1
    for (int i = number; i > 1; i--)
    {

        // Multiplying the factorial by preceeding integers
        factorial *= i;
    }

    // Printing the results
    printf("The factorial of %d is %d \n", number, factorial);

    return 0;
}
