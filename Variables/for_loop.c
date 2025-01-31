#include<stdio.h>

int main() {
    int i = 10;

    for(i; i > 0; i--) {
        printf("Hello _____\n");
    }

    char end;
    printf("\n\nPress the enter to end..........");
    scanf("%c", &end);

    return 0;
}