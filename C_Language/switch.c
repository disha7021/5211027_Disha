#include <stdio.h>
int main() {
    int num;
    do
    {
    
    printf("Enter the number: ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednessday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("Sunday\n");
        break;
        default:
        printf("Wrong input. Try again\n");
    }
    }
    while (num < 1 || num > 7) ;
    
        return 0;
}    
    
