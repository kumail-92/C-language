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