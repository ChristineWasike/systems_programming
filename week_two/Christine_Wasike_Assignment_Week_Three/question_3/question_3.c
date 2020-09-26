/*
Let's code a game

This program will  read a random number (like the program generates a random number)  
and ask the user to guess it. The user has to guess the number that the program 
generated. The program will give 10 attempts to guess the number, on each attempt 
the program will inform that the entered number is less than or greater than the 
random generated number so that the user can easily guess that particular number. 

If the user guesses the number, you congratulate them and you tell them the number 
of guesses they made .

Eg : congratulations , you made 5 guesses.
*/

#include <stdio.h>
#include <stdlib.h>


void main(){
    // Initialize random number
    int randomNumber = rand() % 50;

    // Initialize variable to store the user's number
    int userInput;

    // Initializing the attempts made
    int attempts = 0;
    
    do{
        attempts += 1;
        // Prompting user for a guess of the random number.
        printf("Hello there! What number I'm thinking about? ");
        scanf("%d", &userInput);
        printf("You guesssed: %d \n", userInput);

        int difference = randomNumber - userInput;

        //A check for the right number
        if (difference == 0){
            if (attempts == 1){
                printf("That's the right guess. You attempted this question once.\n");
            } else{
                printf("That's the right guess. You attempted this question %d times.\n", attempts);
            }
            break;

           // A check for inputing a lower number 
        } else if( difference > 0){
            printf("Your guess is less than my number. \n");
            
            // A check for inputing a higher number
        } else {
            printf("Your guess is greater than my number. \n");
        }
        

    } while(attempts < 10);

    if (userInput != randomNumber){
        printf("Sorry, you've used up all your tries.\n");
    }
    
    
}