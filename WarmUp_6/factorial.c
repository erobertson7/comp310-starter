#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num = 4;
    printf("Factorial of %d is: %d\n", num, factorial(num));
}
int factorial(int i){
    if (i <= 0){
        return 1;
    }
    return i*factorial(i - 1);
}