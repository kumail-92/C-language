#include<stdio.h>
int main()
{
    int i;
    char s1[10] = "mOmIn";
    char s2[10];
    char name[50];

    //strlen()
    printf("Enter your Name : ");
    scanf("%s", &name);

    for(i=0; name[i]!= '\0'; i++)
    {

    }
    printf("Length of %s is : %d.", name, i);

    //strcpy()
    for(i=0; s1[i]!= '\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("\n Copied String is : %s", s2);

    //strlwr()
    printf("\nLowercase :- ");
     for(i=0; s1[i]!= '\0'; i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            printf("%c", s1[i] += 32);
        }
        else{
            printf("%c", s1[i]);
        }
    }

    //strupr()
    printf("\nUppercase :- ");
     for(i=0; s1[i]!= '\0'; i++)
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            printf("%c", s1[i] -= 32);
        }
        else{
            printf("%c", s1[i]);
        }
    }

    return 0;
}