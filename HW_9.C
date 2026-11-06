// Question - 1

// #include <stdio.h>

// // global variables
// int n1, n2, choice;

// // function declaration
// void menu();
// int addition(int a, int b);
// int substraction(int a, int b);
// int multiplication(int a, int b);
// int division(int a, int b);
// int modulo(int a, int b);
// void exit();

// int main()
// {
//     printf("Enter Number1 : ");
//     scanf("%d", &n1);

//     printf("Enter Number2 : ");
//     scanf("%d", &n2);

//     while (1)
//     {
//         menu();

//         printf("\nEnter Your Choice :");
//         scanf("%d", &choice);

//         if (choice == 1)
//         {
//             int result = addition(n1, n2);
//             printf("Addition : %d\n", result);
//         }
//         else if (choice == 2)
//         {
//             int result = substraction(n1, n2);
//             printf("Substraction : %d\n", result);
//         }
//         else if (choice == 3)
//         {
//             int result = multiplication(n1, n2);
//             printf("Multiplication : %d\n", result);
//         }
//         else if (choice == 4)
//         {
//             int result = division(n1, n2);
//             printf("Division : %d\n", result);
//         }
//         else if (choice == 5)
//         {
//             int result = modulo(n1, n2);
//             printf("Modulo : %d\n", result);
//         }
//         else if (choice == 6)
//         {
//             exit();
//             break;
//         }
//         else
//         {
//             printf("Invalid Choice!\n");
//         }
//     }

//     return 0;
// }

// // function definition
// void menu()
// {
//     printf("\n1. Addition");
//     printf("\n2. Substraction");
//     printf("\n3. Multiplication");
//     printf("\n4. Division");
//     printf("\n5. Modulo");
//     printf("\n6. Exit");
// }

// int addition(int a, int b)
// {
//     int addition = a + b;
//     return addition;
// }

// int substraction(int a, int b)
// {
//     int substraction = a - b;
//     return substraction;
// }

// int multiplication(int a, int b)
// {
//     int multiplication = a * b;
//     return multiplication;
// }

// int division(int a, int b)
// {
//     int division = a / b;
//     return division;
// }

// int modulo(int a, int b)
// {
//     int modulo = a % b;
//     return modulo;
// }

// void exit()
// {
// }

















// Question - 2

// #include <stdio.h>

// // function declaration
// int sum_of_digits(int a);

// // global variable
// int N;

// int main()
// {

//     printf("Enter Number : "); // 12345
//     scanf("%d", &N);
//     printf("Sum Of Digits : %d", sum_of_digits(N));
//     return 0;
// }

// int sum_of_digits(int a)
// {
//     int i, last = 0, sum = 0;
//     while (a > 0)
//     {
//         last = a % 10;    // last=5, 4, 3, 2, 1
//         sum = sum + last; // sum=5, 9, 12, 14, 15
//         a = a / 10;       // a=1234, 123, 12, 1, 0
//     }
//     return sum;
// }

















// Question 3
// Armstrong no . -> 153 = 1cube + 5cube + 3cube = 153


#include <stdio.h>

// Function declaration
int is_armstrong(int a);

int main()
{
    int N, result;

    printf("Enter Number: "); //153
    scanf("%d", &N);

    result = is_armstrong(N);

    if(result == N)
    {
        printf("%d is Armstrong Number.", N);
    }
    else
    {
        printf("%d is Not Armstrong Number.", N);
    }

    return 0;
}

// Function definition
int is_armstrong(int a)
{
    int temp, last, sum = 0;
    int count = 0, i, power;

    temp = a; //153

    // Count digits
    while(temp > 0)
    {
        count++; //1, 2, 3
        temp = temp / 10; //15, 1, 0
    }

    temp = a; //153

    // Calculate Armstrong number
    while(temp > 0) //153
    {
        last = temp % 10;

        power = 1;

        for(i = 1; i <= count; i++)
        {
            power = power * last; 
        }

        sum = sum + power; //15

        temp = temp / 10; //15
    }

    return sum;
}

