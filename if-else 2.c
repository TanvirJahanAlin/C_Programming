#include <stdio.h>
#include <conio.h>
main ()
{
    int height;
    float cgpa;

    printf ("Enter your height\n");
    scanf("%d",&height);
    printf ("Enter your CGPA\n");
    scanf("%f",&cgpa);

    if (height>=64 && cgpa>=3.75)
        printf ("Yes!!! u r eligible to be the CR\n\n\n");
    else
        printf ("Sorry, Hope for the best\n\n\n");

}
