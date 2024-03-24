#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the first operand: ");
    scanf("%lf", &num1);

    printf("Enter the second operand: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}