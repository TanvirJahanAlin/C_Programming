#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,Choice;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("1.Summation\n2.Multiple\n");
    printf("Press 1/2\n");
    scanf("%d",&Choice);
    switch(Choice)
    {
        case 1:
        printf("The Summation of %d & %d is: %d",a,b,a+b);
        break;

        case 2:
        printf("The Multiplication of %d & %d is: %d",a,b,a*b);
        break;

        default:
        printf("Invalid Input!!!");

    }

}
