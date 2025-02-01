#include<stdio.h>
int main() {

    float gpa;
    printf("Enter your gpa : ");
    scanf("%f", &gpa);

    if(gpa > 3.75 && gpa <= 4.00) {
        printf("Your grade : A+");
    } else if (gpa > 3.50) {
        printf("Your grade : A");
    } else if (gpa > 3.25) {
        printf("Your grade : A-");
    } else if (gpa > 3.00) {
        printf("Your grade : B+");
    } else if (gpa > 2.75) {
        printf("Your grade : B");
    } else if (gpa > 2.50) {
        printf("Your grade : B-");
    } else if (gpa > 2.25) {
        printf("Your grade : C+");
    } else if (gpa > 2.00) {
        printf("Your grade : C");
    } else if (gpa > 1.75) {
        printf("Your grade : D");
    } else if (gpa >= 0.00) {
        printf("Your grade : F");
    } else {
        printf("Your enter wrong gpa.");
    }

    return 0;
}