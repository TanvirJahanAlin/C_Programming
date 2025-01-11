#include<stdio.h>
#include<math.h>
void f_to_c(float F)
{
    float C=(((F-32)/9)*5);
    printf("\nTemperature in Celsius: %f\n\n\n\n",C);
}
void c_to_f(float c)
{
    float f=(((c/5)*9)+32);
    printf("\nTemperature in Fahrenheit: %f\n\n\n\n",f);
}
void main()
{
    int choice;
    float c,f;
    float F,C;
    printf("1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n");
    printf("Press 1 or 2\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter Temperature in Fahrenheit:\n");
        scanf("%f",&F);
        f_to_c(F);
        break;
    case 2:
        printf("Enter Temperature in Celsius:\n");
        scanf("%f",&c);
        c_to_f(c);
        break;
    default:
        printf("Invalid Input!!!");
    }
}
