//Unfinished

#include <stdio.h>

void intro();
int calculate();

void main()
{
    int result;

    intro();
    result = calculate();

    printf("%d\n", result);
}

void intro()
{
    printf("Welcome to the C_Calculator!!!\n");
    printf("There are 4 operations you can choose from: addition(+), subtraction(-), multiplication(*) and division(/)\n");
}

int calculate()
{
    int x, y, result;
    char op;

    printf("Please input the first number: ");
    scanf("%d", &x);
    printf("Please input the second number: ");
    scanf("%d", &y);
    printf("Please input the operation desired: ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            result = x+y;
            return result;
            break;
        case '-':
            result = x-y;
            return result;
            break;
        case '*':
            result = x*y;
            return result;
            break;
        case '/':
            if(y == 0)
            {
                result = -1;
                printf("ERROR: DIVISION BY ZERO\n");
                return result;
            }
            else 
            {
                result = x/y;
                return result;
            } 
        default:
            printf("Operation not recognized\n");
            return -1;
    }
}