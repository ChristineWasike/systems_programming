#include <stdio.h>

// Write a program in C to find the maximum number between two numbers using a pointer.

int maxValue(int *first, int *second){
    if(*first > *second){
        return *first;
    } else if(*second > *first){
        return *second;
    } else{
        return 0;
    }
}

void main(){
    int first, second;
    int *first_pointer;
    int *second_pointer;
    int max;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    first_pointer = &first;
    second_pointer = &second;

    max = maxValue(first_pointer, second_pointer);
    if (max == 0){
        printf("The values are the same.\n");
    } else{
        printf("Greater number: %d\n", max);
    }
    

}