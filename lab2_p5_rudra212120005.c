#include <stdio.h>
#include <conio.h>

main ()
{

    int n1;
    int n2;
    int sum;
    int product;

    printf("Enter the first integer value\n");
    scanf("%d",&n1);

    printf("Enter the second integer value\n");
    scanf("%d",&n2);

    sum=n1+n2;
    product=n1*n2;

    printf("\n\nThe sum of 2 numbers is %d\nThe product of 2 numbers is %d\n\n\n",sum,product);

}


