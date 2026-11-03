// here.....
//      addition() is takes nothing returns nothing
//      substraction() is takes something returns nothing
//      multiplication() is takes nothing returns something
//      division() is takes something returns something


#include<stdio.h>

//global variable
int const age = 18;

//function declaration
void addition(); 
void substraction(int a, int b); 
int multiplication(); 
int division(int a, int b); 

int main()
{
    printf("Main function started...\n");
    //function call
    addition();
    substraction(40,20);
    printf("\nMultiplication is : %d", multiplication());
    printf("\nDivision is : %d", division(40,20));
    int age1  = 20;
    printf("\nAge : %d", age);
    return 0;
}

//function definition
void addition()
{
    int a=40, b=20;
    int addition = a+b;
    printf("\nAddition is : %d", addition);
}

void substraction(int a, int b)
{
    int substraction = a-b;
    printf("\nSubstraction is : %d", substraction);
}

int multiplication()
{
    int a=40, b=20;
    int multiply = a*b;
    return multiply;
}

int division(int a, int b)
{
    int division = a/b;
    return division;
}