/*
Write a C program to print the following diamond

1     *
2    * *
3   * * *
4  * * * *
5 * * * * *
4  * * * *
3   * * *
2    * *
1     *
*/

#include <stdio.h>

void diamond(){
    // Initializing a variable with the second highest value of acceptable stars
    int upperBound = 4;

    // Setting the number of spaces to that of one less number of stars
    int space = upperBound;


    // Looping through values 0 -3
    for (int i = 0; i <upperBound; i++){
        for (int j = 0; j <= space; j++){
            printf(" ");
        }
        space --;

        for (int j = 0; j <=i; j++){
            printf("* ");
        }

        printf("\n");
    }

    space = 0;
    for (int i = upperBound; i >=0; i--){

        for (int j = 0; j <= space; j++){
            printf(" ");
        }
        space ++;

        for (int j = 0; j <=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}


int main(int argc, char const *argv[]){    
    diamond();

}
