/*1.A C program to take an int, a float and a char input from user and print them on the screen.*/

#include <stdio.h>
#include <conio.h>

main ()
{

    int i;
    float f;
    char ch;

    printf("Enter an integer\n");
    scanf("%d",&i);

    printf("Enter a float\n");
    scanf("%f",&f);

    printf("Enter a character\n");
    scanf(" %c",&ch);


    printf("\n\n\nThe outputs are:    %d, %f, %c\n\n\n\n\n\n\n",i,f,ch);


}
