#include<stdio.h>
int main() {
    
    int day;
    printf("Enter day (0-7) : ");
    scanf("%d", &day);

    switch (day)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Satrurday");
        break;
    default:
        printf("Wrong input detected.");
        break;
    }

    return 0;
}