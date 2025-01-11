#include <stdio.h>
#include <conio.h>

main ()
{

    int n1,n2,r1,r2,r3,r4;

    printf("Enter the first integer value\n");
    scanf("%d",&n1);

    printf("Enter the second integer value\n");
    scanf("%d",&n2);

    r1=n1+n2;
    r2=n1*n2;

    printf("\n\nThe sum of %d and %d is %d\nThe product of %d and %d is %d",n1,n2,r1,n1,n2,r2);

    r3=r1+r2;
    r4=r1*r2;

    printf("\n\nThe sum of %d and %d is %d\nThe product of %d and %d is %d\n\n\n",r1,r2,r3,r1,r2,r4);

}



