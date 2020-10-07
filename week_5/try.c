#include <stdio.h>
// Macro
// #define square(c) ((c) * (c))
#define square(c) c*c

// int *cont_int(){
//     int const *ptr;
//     const int x = 6;
//     ptr = &x;
//     *ptr = 10;    
// }

void addr(int *p){
    int q = 50;
    printf("Q address: %d\n", &q);
    p =&q;
}

int main(){
    // int x, a = 7, b = 5;
    // printf("%d", square(a-b));
    // getchar();
    // return 0;

    int x = 70;
    int *p = &x;
    printf("X address: %d\n", &x);
    addr(&x);
    printf("%d\n", p);
    printf("P address: %d\n", &x);
    return 0;
}

