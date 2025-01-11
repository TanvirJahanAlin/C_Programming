main()
{
    int a;
    float c,f;

    printf("Enter 1(F-C) or 2(C-F)\n");
    scanf("%d",&a);

    switch (a)

    {

    case 1:
        printf("Temperature in Fahrenheit\n");
        scanf("%f",&f);

        c=(((f-32)/9)*5);

        printf("\nTemperature in Celsius: %f\n\n\n\n",c);
        break;
    case 2:
        printf("Temperature in Celsius:\n");
        scanf("%f",&c);

        f=(((c/5)*9)+32);

        printf("\nTemperature in Fahrenheit: %f\n\n\n\n",f);
        break;
    default:
        printf("Invalid input!!!");

    }

}
