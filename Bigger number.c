#include <stdio.h>
#include <conio.h>
main ()
{
    int a,b;
    printf ("Enter two number:\n");
    scanf ("%d%d",&a,&b);

    (a>b) ? printf("%d is bigger than %d",a,b) : printf("%d is bigger than %d",b,a);
}
