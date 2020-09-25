/*
Short test to see if this code compiles on another computer.
*/


#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);



void main(){
    int number_a;
    int number_b;
    int operation;
    printf("Enter first number: ");
    scanf("%d", &number_a);

    printf("Enter second number: ");
    scanf("%d", &number_b);

    printf("What operation would you want to carry out? \n 1. Add\n 2. Subract\n 3. Multiply\n 4. Divide\n");
    scanf("%d", &operation);


    switch (operation){
    case 1:
        printf("The result of adding these two numbers is: %d \n", add(number_a, number_b));     
        break;
    
    case 2:
        printf("The result of subtracting these two numbers is: %d \n", subtract(number_a, number_b));
        break;

    case 3:
        printf("The result of multiplying these two numbers is: %d \n", multiply(number_a, number_b));
        break;
    
    case 4:
        printf("The result of dividing these two numbers is: %d \n", divide(number_a, number_b));
        break;

    default:
        break;
    }
   
}
