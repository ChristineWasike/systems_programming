/*
Question Four
Write a program that will prompt the user 
to input ten integer values. The program 
should then display the smallest and greatest 
of those values. It should also display the 
value that occurs the most.  [2 pts]
*/

#include <stdio.h>
#include <stdlib.h>


// When prompted to key in the 10 integers,it is important that the individual values be spaced
int main(){
    int a, b, c, d, e, f, g, h, i, j;

    do{
        printf("Enter 10 integers: ");
    } while (scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j) != 10);

    
    int arr[10] = {a, b, c, d, e, f, g, h, i, j};
    const int size = 10;
    int holder;
    int length = sizeof arr;

    // Sorting the array from least to highest
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j ++){
            if (arr[i] > arr[j]){
                holder = arr[i];
                arr[i] = arr[j];
                arr[j] = holder;
            }
            
        }
        
    }

    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    

    printf("\n");
    printf("Size of array: %d \n", size);
    printf("Greatest: %d \n", arr[0]);
    printf("Least: %d \n", arr[size -1]);
    return 0;
}
