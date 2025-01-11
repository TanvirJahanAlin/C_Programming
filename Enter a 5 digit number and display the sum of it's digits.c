#include <stdio.h>
#include <conio.h>

main()
{

    int n,sum,sum1,sum2,sum3,sum4;
    printf("Enter a five digit number: ");
    scanf("%d",&n);

    sum1=n%10;
    n=n/10;

    sum2=n%10;
    n=n/10;

    sum3=n%10;
    n=n/10;

    sum4=n%10;
    n=n/10;

    sum= n+sum1+sum2+sum3+sum4;

    printf("\nThe result is: %d",sum);

}

