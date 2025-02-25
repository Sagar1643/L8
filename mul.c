#include <stdio.h>

int main() {
    int num1, num2, num3, product;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    product = num1 * num2 * num3;

    printf("The product of %d, %d, and %d is %d\n", num1, num2, num3, product);

    return 0;
}

