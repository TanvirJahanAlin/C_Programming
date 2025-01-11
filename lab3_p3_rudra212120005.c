/*3.Take value of length and breath of a rectangle from the user as float. Find its area and print it on the screen after type casting it to int.*/

#include <stdio.h>
#include <conio.h>

main ()
{

    float l,b;

    printf("Enter the value of length\n");
    scanf("%f",&l);

    printf("Enter the value of breadth\n");
    scanf("%f",&b);

    int A;

    A=l*b;

    printf("The area of a rectangle is %d\n",A);


}
