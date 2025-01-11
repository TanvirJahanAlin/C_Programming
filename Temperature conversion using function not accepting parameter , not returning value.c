#include<stdio.h>
#include<math.h>
void f_to_c( )
{
    float F,C;
    printf("Enter Temperature in Fahrenheit:\n");
    scanf("%f",&F);

    C=(((F-32)/9)*5);

    printf("\nTemperature in Celsius: %f\n\n\n\n",C);
}
void c_to_f( )
{
    float c,f;
    printf("Enter Temperature in Celsius:\n");
    scanf("%f",&c);

    f=(((c/5)*9)+32);

    printf("\nTemperature in Fahrenheit: %f\n\n\n\n",f);
}
void main()
{
    int choice;
    printf("1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n");
    printf("Press 1 or 2\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        f_to_c( );
        break;
    case 2:
        c_to_f( );
        break;
    default:
        printf("Invalid Input!!!");

    }
}


