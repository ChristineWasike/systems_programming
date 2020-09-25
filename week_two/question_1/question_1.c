/* Write a C program that capitalizes the first letter 
of every word in a sentence . Use a sub-function to 
capitalize the first letter of a word and call this 
sub-function in the main() where you will display 
the output sentence where the first letter of each 
word is capitalized. [2 pts]*/

// Break the string into an array of works

//IN THE SUBFUNCTION(Capitalize Function)
// Take in a word as an argument
// 

#include <stdio.h>
#include <string.h>

void capitalize(char userString[50]){

    // Looping through the string
    for (int i = 0; i < strlen(userString); i++){
        // Converting the first letter of the first word to an uppercase letter
        if(i == 0){
            userString[i] = userString[i] - 32;

        // Converting the leter that preceeds each space to a capital letter
        }else if (userString[i] == ' '){
            userString[i + 1] = userString[i +1] - 32;
        } 
        
    }

    // Printing the resulting
    printf("Here is your transformed string: \n%s \n", userString);
    
}

void main(){

    // Declaring a character array/ string with room for 50 characters
    char userString[50];

    // Prompting the user for a string
    printf("Enter a string of your choice: \n");

    // Storing the user's string in the declared string above
    scanf("%[^\n]",userString);

    // calling the capitalize function
    capitalize(userString);
}


