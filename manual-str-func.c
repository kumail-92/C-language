#include<stdio.h>
int main()
{

    int i, length=0, flag = 1, length1=0, length2=0;
    char str1[50], str2[50], s2[10], name[50], st1[50], st2[50], s1[10] = "mOmIn";

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

    // strcmp()
    getchar();  // Clear the leftover newline
    printf("\nEnter String1: ");
    fgets(st1, sizeof(st1), stdin);
    printf("Enter String2: ");
    fgets(st2, sizeof(st2), stdin);
    for (i = 0; st1[i] != '\0'; i++)
    {
        length1++;
    }
    for (i = 0; st2[i] != '\0'; i++)
    {
        length2++;
    }
    if (length1 == length2)
    {
        for (i = 0; st1[i] != '\0'; i++)
        {
            if (st1[i] != st2[i])
            {
                flag = 0;
                break;
            }
        }
    }
    else{
        flag = 0;
    }
    if (flag == 1)
    {
        printf("\nSame.");
    }
    else
    {
        printf("\nNot Same.");
    }

     //strrev()
    printf("\nEnter String To Reverse it : ");
    fgets(str1, sizeof(str1), stdin);
    for(i=0; str1[i]!= '\0'; i++)
    {
        length++;
    }
    // index of last element : length-1
    for(i=0; str1[i]!='\0'; i++,length--)
    {
        str2[i] = str1[length-1];
    }
    str2[i] = '\0';
    printf("\nReversed String is : %s", str2);

    return 0;
}