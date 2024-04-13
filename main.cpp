#include "mbed.h"
#include <cstdio>

int t1 = 0;
int t2 = 1;
int next_term = t1 + t2;
int max_terms = 8;

    // 0, 1, 1, 2, 3, 5, 8, 13, 21...

int main()
{
    printf("Hello, lab program 1 \r\n");
    printf("Fibonacchi sequence: %d, %d, ", t1, t2);
    for(int i=3; i<=max_terms; i++){
        printf("%d, ", next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }

    printf("\r\n");

    while (true) {

    }
}

