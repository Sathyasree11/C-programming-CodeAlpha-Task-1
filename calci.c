#include <stdio.h>

int main() {
    float num1, num2, result;
    char op, choice;

    do {
        printf("\n*** BASIC CALCULATOR ***\n");
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (op) {
            case '+':
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case '-':
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case '*':
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero!\n");
                    break;
                }
                printf("Result = %.2f\n", result);
                break;

            default:
                printf("Invalid operator! Use +, -, *, or /.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nCalculator exited. Thank you!\n");

    return 0;
}
