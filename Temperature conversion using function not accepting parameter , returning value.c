#include<stdio.h>
#include<math.h>
float f_to_c( )
{
    float F,C;
    printf("Enter Temperature in Fahrenheit:\n");
    scanf("%f",&F);
    C=(((F-32)/9)*5);
    return C;
}
float c_to_f ( )
{
    float c,f;
    printf("Enter Temperature in Celsius:\n");
    scanf("%f",&c);
    f=(((c/5)*9)+32);
    return f;
}
void main()
{
    int choice;
    float result;
    printf("1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n");
    printf("Press 1 or 2\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        result=f_to_c( );
        printf("\nTemperature in Celsius: %f\n\n\n\n",result);
        break;
    case 2:
        result=c_to_f( );
        printf("\nTemperature in Fahrenheit: %f\n\n\n\n",result);
        break;
    default:
        printf("Invalid Input!!!");

    }
}



