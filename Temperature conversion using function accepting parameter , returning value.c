#include<stdio.h>
#include<math.h>
float f_to_c(float F)
{
    float C=(((F-32)/9)*5);
    return C;
}
float c_to_f(float c)
{
    float f=(((c/5)*9)+32);
    return f;
}
void main()
{
    int choice;
    float c,f,F,C,result;

    printf("1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n");
    printf("Press 1 or 2\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter Temperature in Fahrenheit:\n");
        scanf("%f",&F);
        result=f_to_c(F);
        printf("\nTemperature in Celsius: %f\n\n\n\n",result);
        break;
    case 2:
        printf("Enter Temperature in Celsius:\n");
        scanf("%f",&c);
        result=c_to_f(c);
        printf("\nTemperature in Fahrenheit: %f\n\n\n\n",result);
        break;
    default:
        printf("Invalid Input!!!");
    }
}

