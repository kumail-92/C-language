#include<stdio.h>
int main()
{
    int no1, no2;
    char operator;

    printf("Calculator....");

    printf("\n\nEnter Number1 : ");
    scanf("%d", &no1);

    printf("Enter Number2 : ");
    scanf("%d", &no2);

    printf("Enter Operator(+,-*,/): ");
    scanf(" %c", &operator); // space before %c for ignore space and new line

    switch(operator)
    {
        case '+' :
        printf("Addition is : %d", no1 + no2);
        break;

        case '-' :
        printf("Substraction is : %d", no1 - no2);
        break;

        case '*' :
        printf("Multiplication is : %d", no1 * no2);
        break;

        case '/' :
        printf("Division is : %d", no1 / no2);
        break;

        default : 
        printf("Invalid Operator!");
    }
    return 0;
}