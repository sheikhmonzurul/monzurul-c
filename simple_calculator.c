#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (op == '+')
        printf("Result: %.2f\n", num1 + num2);
    else if (op == '-')
        printf("Result: %.2f\n", num1 - num2);
    else if (op == '*')
        printf("Result: %.2f\n", num1 * num2);
    else if (op == '/')
        printf("Result: %.2f\n", num1 / num2);
    else
        printf("Invalid operator!\n");

    return 0;
}
