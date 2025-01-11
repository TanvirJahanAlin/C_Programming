main()
{
    int age;
    char sex;

    printf("Enter your sex(M or F):");
    scanf("%ch",&sex);

    if((sex=='f')||(sex=='F'))
        printf("You can work only in urban areas.");
    else if((sex=='m')||(sex=='M'))
    {
        printf("Enter your age:");
        scanf("%d",&age);

        if(age>=20&&age<40)
            printf("You may work in anywhere.");
        else if(age>=40&&age<=60)
            printf("You will work in urban areas only.");
        else
            printf("ERROR");
    }
    else
        printf("Invalid input!!!");
}
