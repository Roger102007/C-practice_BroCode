#include <stdio.h>
#include <math.h>
//CALCULATOR PROGRAM
int main()
{
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Please enter the first number: ");
    scanf("%lf", &num1);
    while (getchar() != '\n');
    
    printf("Please enter the operator(+ - * /): ");
    if(scanf("%c", &operator) != 1)
    {
        printf("error");
        return 1;
    }
    while (getchar() != '\n');
    
    printf("Please enter the second number: ");
    scanf("%lf", &num2);
    while (getchar() != '\n');
    

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0.0)
            {
                printf("invalid input\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("error\n");
            return 1;
    }

    printf("result: %.4lf", result);
    
    
    
    
    
    return 0;
}
