#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num1;
    int num2;

    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter another number: ");
    scanf("%d",&num2);

    printf("Sum: %d\n", num1+num2);
    printf("Difference: %d\n", num1-num2);
    printf("Product: %d\n", num1*num2);
    printf("Quotient: %d\n", num1/num2);
}