#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("\n===========================\n");
        printf("        CALCULATOR\n");
        printf("===========================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo (Remainder)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting Calculator... Goodbye!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                printf("Result = %.2lf\n", num1 + num2);
                break;

            case 2:
                printf("Result = %.2lf\n", num1 - num2);
                break;

            case 3:
                printf("Result = %.2lf\n", num1 * num2);
                break;

            case 4:
                if (num2 == 0)
                    printf("Error! Cannot divide by zero.\n");
                else
                    printf("Result = %.2lf\n", num1 / num2);
                break;

            case 5:
                if ((int)num2 == 0)
                    printf("Error! Modulo by zero not allowed.\n");
                else
                    printf("Result = %d\n", (int)num1 % (int)num2);
                break;

            default:
                printf("Invalid choice! Please select 1–6.\n");
        }
    }

    return 0;
}
