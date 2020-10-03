#include <stdio.h>


int *myFunction(){
    int data = 8;    
    return &data;
}
void main(){
    int *dataPointer = myFunction();

    // printf("Hello world\n");
    printf("%d\n", *dataPointer);
    
}
