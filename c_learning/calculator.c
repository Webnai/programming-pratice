#include <stdio.h>
int main()
{
    double number1, number2;
    char op;

    printf("Please enter the first number: " );
    scanf("%lf", &number1);
    printf("please enter the operation(+,-,*,/): ");
    scanf("%s", &op);
    printf("Please enter the second number: ");
    scanf("%lf", &number2);

    if (op == '+')
    {
        printf("%.2lf + %.2lf = %.2lf\n", number1, number2, number1 + number2);
    }
    else if (op == '-')
    {
        printf("%.2lf - %.2lf = %.2lf\n", number1, number2, number1 - number2);
    }
    else if (op == '*')
    {
        printf("%.2lf * %.2lf = %.2lf\n", number1, number2, number1 * number2);
    } else if (op == '/') {
        if (number2 == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("%.2lf / %.2lf = %.2lf\n", number1, number2, number1 / number2);
        }
    } else {
        printf("Error: Invalid operator\n");
    }
    return 0;
}