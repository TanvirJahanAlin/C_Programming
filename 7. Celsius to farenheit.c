main()
{

    int c,f;
    printf("Temperature in Celsius\n");
    scanf("%d",&c);

    f=(((c/5)*9)+32);

    printf("\nTemperature in Fahrenheit: %d\n\n\n\n",f);


    int F,C;
    printf("Temperature in Fahrenheit\n");
    scanf("%d",&F);

    C=(((F-32)/9)*5);

    printf("\nTemperature in Celsius: %d\n\n\n\n",C);

}
