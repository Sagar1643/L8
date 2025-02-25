#include <stdio.h>

int main() {
    int num1, num2, difference;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    difference = num1 - num2;

    printf("The difference between %d and %d is %d\n", num1, num2, difference);

    return 0;
}

