#include<stdio.h>
int main()
{
    int i;
    char string1[10], string2[10];
    int key1, key2;

    printf("Performing Encryption Based on Key...\n");

    printf("Enter String: ");
    scanf("%s", &string1);
    printf("Enter Key: ");
    scanf("%d", &key1);

    for(i=0;string1[i]!='\0';i++)
    {
        string1[i] = string1[i] + key1;
    }

    printf("%s", &string1);

    printf("\n");

    printf("\nPerforming Decryption Based on Key...\n");

    printf("Enter String: ");
    scanf("%s", &string2);
    printf("Enter Key: ");
    scanf("%d", &key2);

    for(i=0;string2[i]!='\0';i++)
    {
        string2[i] = string2[i] - key2;
    }

    printf("%s", &string2);
    
    return 0;
}