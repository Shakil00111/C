#include<stdio.h>

int main() {

    int ver;
    int* ptr;

    ptr = &ver;
    *ptr = 4;

    printf("ver : %d", ver);
    printf("\nptr : %p", ptr);
    printf("\ndecimel vlaue : %u", ptr);

    return 0;
}