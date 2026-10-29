#include<stdio.h>
int main()
{
    int length=0, upper=0, lower=0, digit=0, special=0, i;
    char pass[50];

    printf("Enter Password: ");
    scanf("%s", &pass);
    for(i=0;pass[i]!='\0';i++)
    {
        length++;
        if(pass[i] >= 'A' && pass[i] <= 'Z')
        {
            upper++;
        }
        else if(pass[i] >= 'a' && pass[i] <= 'z')
        {
            lower++;
        }
        else if(pass[i] >= '0' && pass[i] <= '9')
        {
            digit++;
        }
        else if(pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '&' || pass[i] == '^')
        {
            special++;
        }
    }
    if(length >= 8 && upper>0 && lower>0 && digit>0 && special>0)
    {
        printf("\nPassword is valid.");
    }
    else
    {
        printf("\nPassword is Invalid!(You have to include min. 1 upeercase , lowercase letter, min. 1 digit and min. 1 special charecter and min. 8 characters length)");
    }
    
    return 0;
}