main()
{
    char a;

    printf("Enter any alphabet:\n");
    scanf("%c",&a);

    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel",a);
        break;
        default:
            printf("%c is a consonant",a);
    }
}
