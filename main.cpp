#include "mbed.h"
#include <cstdio>


int max_terms = 8;

int fib(int n){
    //n is the term result
    if(n == 0 || n ==1)
    return n;
    else
        return (fib(n-1) + fib(n-2));

}

int main(){
    
    //this is the main function

    printf("Hello, lab program 1 using recursive functions \r\n");

      for (int i=0; i<max_terms; i++){
          printf("%d, ", fib(i));
      }
    

    printf("\r\n");

    while (true) {

    }
}


