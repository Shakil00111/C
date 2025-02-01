#include<stdio.h>

int main() {

    float pi = 3.1416, radius;

    printf("Enter radius of circle : ");
    scanf("%f", &radius);

    printf("Area of the Circle is : %f", pi * radius *radius);

    return 0;
}