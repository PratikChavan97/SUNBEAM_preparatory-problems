#include <stdio.h>

int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = factorial(num);

    printf("Factorial of %d is: %d", num, result);
    return 0;
}