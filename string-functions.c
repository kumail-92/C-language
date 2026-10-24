// string functions in C
#include<stdio.h>
#include<string.h>

int main()
{
    char name2[50];
    char name[30];
    printf("Enter Your Full Name: ");
    fgets(name2, sizeof(name2), stdin);

    printf("\nYour Name is: %s", name2);
    printf("\nLength : %d", strlen(name2));
    strcpy(name, name2);
    printf("\nCopied string is : %s", name);
    strcat(name2, name);
    printf("\nCombined String is : %s", name2);
    printf("\nAns of strcmp : %d", strcmp(name, name2));
    printf("\nReveresed String of name is : %s", strrev(name));
    return 0;
}