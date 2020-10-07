//Write a program in C to store n elements in an array 
// and print the elements using pointer.

#include <stdio.h>
#include <stdlib.h>

// implemented call referencing as well
void arrayGenerator(int *number){
    int array[*number];
    int array_size =sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < *number; i++){
        array[i] = i + 1;
    }
    

    // accessing the array elements using pointers
    for (int i = 0; i < array_size; i++){
        printf("%d ", *(array + i));
    }
    printf("\n");
    
}

void main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    arrayGenerator(&number);
}