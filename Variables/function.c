#include<stdio.h>

// functions declearations

void hello();
int fact(int num);

int main() {

    //function call

    hello();

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    int result = fact(num);

    if (result > 0) {
        printf("\nFactorial is : %d", result);
    } else {
        printf("Something went wrong.");
    }

    return 0;
}

// 1st function definition 

void hello() {
    printf("Hello world!");
}


//2nd function definition for factorial

int fact(int num) {

    if (num < 0) {
        return 0;
    }

    int fact = 1;

    if (num == 1) {
        return fact;
    } else {
        for (num; num > 0; num--) {
            fact *= num;
        }
    }

    return fact;
}