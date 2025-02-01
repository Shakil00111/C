#include<stdio.h>

int main() {
    
    int age;
    char sex;

    printf("Enter your sex : ");
    scanf("%c", &sex);

    printf("Enter you age: ");
    scanf("%d", &age);

    printf("Age is %d", age);
    printf("\nSex : %c", sex);
    return 0;
}