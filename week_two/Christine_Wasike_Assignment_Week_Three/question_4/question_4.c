/*
Write a C program that will count uppercase, 
lowercase and special characters in a sentence. 
Use a sub-function to count the uppercase, lowercase, 
special characters for each word in the sentence and 
call this sub-function in the main() where you will 
display the total counts for the 3 categories.  
*/

#include <stdio.h>
#include <string.h>

void upperCase(char userString[30]){
    int tracker = 0;

    for (int i = 0; i < strlen(userString); i++){
        if (userString[i] >= 65 && userString[i] <= 90){
            tracker+=1;   
        }
        
    }

    printf("Uppercase letters: %d\n", tracker);
    
}

void lowerCase(char userString[30]){
    int tracker = 0;
    for (int i = 0; i < strlen(userString); i++){
        if (userString[i] >= 97 && userString[i] <= 122){
            tracker+=1;   
        }
        
    }

    printf("Lowercase letters: %d\n", tracker);
    
}

void specialCharacter(char userString[30]){
    int tracker = 0;
    for (int i = 0; i < strlen(userString); i++){
        if (!(userString[i] >= 97 && userString[i] <= 122 || userString[i] >= 65 && userString[i] <= 90)){
            tracker+=1;   
        }
        
    }

    printf("Special characters: %d\n", tracker);
}

void main(){

    char userInput[30];
    printf("Enter a string and  we'll help you figure out the lowercase, uppercase letters and special characters it has: \n");
    scanf("%[^\n]", userInput);

    upperCase(userInput);
    lowerCase(userInput);
    specialCharacter(userInput);

}