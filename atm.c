#include <stdio.h>
int main()
{
    int choice;
    int balance = 1000, deposit = 0, withdraw = 0;

    do
    {
        printf("\n\n1) Check Balance \n2) Deposit \n3) Withdraw \n4) Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Your balance is %d.", balance);
            break;

        case 2:
            printf("Enter money you want to Deposit: ");
            scanf("%d", &deposit);
            balance += deposit;
            printf("Money deposited into Your Account.");
            break;

        case 3:
            printf("Enter money you want to Withdraw: ");
            scanf("%d", &withdraw);
            if (withdraw <= balance)
            {
                balance -= withdraw;
                printf("Money withdraw successfully.");
            }
            break;

        case 4:
            break;

        default:
            printf("Invalid Choice!");
            break;
        }
    } while (choice != 4);

    return 0;
}