/*
Question Three

Write a program that prompts the user for a 
positive integer and then reports the closest 
integer having a whole number square root. 
For example, if the user enters 8, then the 
program reports 9. If the user enters 18, then 
the program reports 16. The program should work 
for any number having one to seven digits. [3 pts]

For this exercise, I want you to write a C function 
that takes an integer as input and checks to see if 
the given integer is a perfect square. Use that function 
in your program for the above problem
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool perfectSquare(int userInput){
    bool flag = false;
    for (int i = 0; i <= userInput; i++){
        if (userInput == i*i){
            flag = true;
        } 
    }
    
    return flag;
}

int main(){
    int userInput;
    printf("Enter a positive number: ");
    scanf("%d", &userInput);
    printf("Number: %d \n", userInput);

    if (perfectSquare(userInput)){
        printf("This number is a perfect square: %d \n", userInput);
    } else{
        int perfectNumber = userInput;
        while(! perfectSquare(perfectNumber)){
            perfectNumber++;
        }
        printf("%d is not a perfect square the closest one though is: %d \n", userInput, perfectNumber);
    }
    
    return 0;
}
